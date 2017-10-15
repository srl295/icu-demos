dnl -*-m4-*-
dnl configure.in for ICU Apps
dnl Steven R. Loomis
dnl Copyright (C) 1999-2017, International Business Machines Corporation and
dnl   others. All Rights Reserved.
dnl © 2016 and later: Unicode, Inc. and others.
dnl License & terms of use: http://www.unicode.org/copyright.html

dnl Process this file with autoconf to produce a configure script

AC_PREREQ(2.69)
AC_CONFIG_MACRO_DIR([m4])
AC_INIT(icuapps, 0.0, http://icu-project.org/bugs, [ICU Apps], [http://icu-project.org])
dnl Check a file in our files, just to make sure we have a sane setup..
AC_CONFIG_SRCDIR(.)

dnl Will set the variable 'ICU_CONFIG'
PKG_CHECK_MODULES([ICU], [icu-uc icu-i18n icu-io])

AC_CHECK_PROG(AUTOCONF, autoconf, autoconf, true)

# # ICU4C configure.in is working too hard. See below.
# AC_CHECK_HEADERS([dlfcn.h readline/readline.h fcgiapp.h])
# AC_SEARCH_LIBS(readline, [readline edit]) 
# AC_SEARCH_LIBS(FCGX_GetParam, [fcgi])
# AC_CHECK_FUNCS([dlopen readline])

# AC_PROG_INSTALL

# # make sure install is relative to srcdir - if a script
# if test "$srcdir" = "."; then
#   # If srcdir isn't just ., then (srcdir) is already prepended.
#   if test "${ac_install_sh}" = "${INSTALL}"; then
#    INSTALL="\\\$(top_srcdir)/${ac_install_sh}"
#   fi
# fi

# AC_CONFIG_HEADER(apputil/demo_config.h)


AC_OUTPUT([Makefile])

dnl

