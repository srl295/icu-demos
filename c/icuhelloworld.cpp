// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include <unicode/locdspnm.h>
#include <unicode/ustream.h>
#include <iostream>
#include "assertok.h"

int main() {
    UErrorCode status = U_ZERO_ERROR;
    LocalPointer<LocaleDisplayNames> 
        names(LocaleDisplayNames::createInstance(Locale::getDefault(), ULDN_DIALECT_NAMES));
    if(!names.isValid()) return 1; // hereafter: ASSERT_VALID(names);
    UnicodeString world;
    names->regionDisplayName("001", world);
    std::cout << "Hello, " << world << std::endl;
    return 0;
}
