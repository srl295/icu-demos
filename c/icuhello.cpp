// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html

#include <unicode/uclean.h>
#include <unicode/ustream.h>
#include <iostream>
#include "assertok.h"

int main(int argc, const char *argv[]) {
    UErrorCode status = U_ZERO_ERROR;
    u_init(&status);
    ASSERT_OK(status);
    UnicodeString msg(u"Hello, ☃ ");

    std::cout << msg << std::endl;

    return 0;
}