// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include <unicode/locdspnm.h>
#include <unicode/ustream.h>
#include <unicode/msgfmt.h>
#include <unicode/resbund.h>
#include <iostream>
#include "assertok.h"

/**
 * run with LC_ALL=es, LC_ALL=en etc.
 */

int main() {
    u_setDataDirectory("res/out"); // this is where the data is generated, see Makefile

    UErrorCode status = U_ZERO_ERROR;
    Locale locale = Locale::getDefault();
    ResourceBundle resourceBundle("hellores", locale, status);
    UnicodeString thing = resourceBundle.getStringEx("hello", status);
    ASSERT_OK(status);
    std::cout << locale.getName() << " Message: " <<   thing << std::endl;
    
    LocalPointer<LocaleDisplayNames> 
        names(LocaleDisplayNames::createInstance(locale, ULDN_DIALECT_NAMES));
    if(!names.isValid()) return 1; // hereafter: ASSERT_VALID(names);
    UnicodeString world;
    names->regionDisplayName("001", world);

    // New code, use a message
    const int kArgCount=1;
    Formattable arguments[kArgCount]     = { world };
    UnicodeString      argnames[kArgCount]     = {"world"};
    FieldPosition fpos = 0;
    
    MessageFormat msg(thing, locale, status);
    UnicodeString result;
    msg.format(argnames, arguments, kArgCount, result, status);
    ASSERT_OK(status);
    std::cout << result << std::endl;
    return 0;
}
