#     							-*- Autoconf -*-
# serial 3
#
# Author: Eelco Visser <visser@cs.uu.nl>
#
# This Autoconf macro file provides parameters for a package that is built
# with the XT bundle of program transformation tools.
# The macros are organized hierarchically such that packages that are included
# in a larger bundle do not need to be provided explicitly.

# XT_ left in configure is the sign a macro was not defined, or there was a typo
# in a macro invocation.
m4_pattern_forbid([^XT_])

AC_DEFUN([XT_SETUP],
[
  AC_REQUIRE([XT_DARWIN])
])

# XT_DARWIN
# ---------
AC_DEFUN([XT_DARWIN],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([AC_CANONICAL_BUILD])

  # As an exception to XT_* macros name, this is a valid part of configure.
  m4_pattern_allow([^XT_DARWIN(_TRUE|_FALSE)?$])

  AC_MSG_CHECKING([whether host operating system is Darwin])
  xt_darwin="no"
  case $host_os in
    darwin*)
      xt_darwin="yes"
      ;;
  esac
  AC_MSG_RESULT([$xt_darwin])
  AM_CONDITIONAL([XT_DARWIN], [test "$xt_darwin" = "yes"])
])

# XT_ARG_WITH(OPTION, DEFAULT, ARGNAME, NAME, [WITNESS])
# ------------------------------------------------------
# Declaring the option --with-OPTION=ARGNAME to specify the location of
# the package NAME.
#
# Store the result in the variable which name is OPTION upper cased,
# using underscore for non letters.  $DEFAULT (note the $) is its
# default value.
#
# If the WITNESS is specified, make sure the file $VAR/WITNESS exists.
AC_DEFUN([XT_ARG_WITH],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
AC_ARG_WITH([$1],
            [AS_HELP_STRING([--with-$1=$3], [use $4 at $3 @<:@$2@:>@])],
	    [AC_Var=$withval],
	    [AC_Var=$$2])
AC_SUBST(AC_Var)dnl
m4_ifval([$5],
[test -f "$AC_Var/$5" ||
  AC_MSG_ERROR([no such file: $AC_Var/$5
        Check the value of AC_Var (--with-$1)])
])dnl
m4_popdef([AC_Var])dnl
])

# XT_USE_XT_PACKAGES
# ------------------
AC_DEFUN([XT_USE_XT_PACKAGES],
[
  AC_REQUIRE([XT_SETUP])

  BUILD_XTC="XTC"

  # M-x align-all-strings is your friend.
  #           OPTION,            DEFAULT,                ARGNAME, NAME,                      [WITNESS])
  XT_ARG_WITH([xt],              [prefix],               [DIR],  [XT Packages])
  XT_ARG_WITH([aterm],           [XT],                   [DIR],  [ATerm Library],            [lib/libATerm.a])
  XT_ARG_WITH([sdf],             [XT],                   [DIR],  [SDF Packages])
  XT_ARG_WITH([sglr],            [SDF],                  [DIR],  [SGLR Parser],              [bin/sglr])
  XT_ARG_WITH([pgen],            [SDF],                  [DIR],  [PGEN Parser Generator],    [bin/sdf2table])
  XT_ARG_WITH([pt-support],      [SDF],                  [DIR],  [PT Support])
  XT_ARG_WITH([asf-library],     [SDF],                  [DIR],  [ASF Library])

  XT_ARG_WITH([strategoxt],      [XT],                   [DIR],  [Stratego/XT])
  XT_ARG_WITH([srts],            [STRATEGOXT],           [DIR],  [Stratego Run-Time System])
  XT_ARG_WITH([xtc],             [STRATEGOXT],           [DIR],  [XTC (XT Composition)])
  XT_ARG_WITH([repository],      [datadir/$PACKAGE/XTC], [FILE], [XTC Repository])
  XT_ARG_WITH([build-repository],[BUILD_XTC],            [FILE], [Build-time XTC Repository])
  XT_ARG_WITH([strc],            [STRATEGOXT],           [DIR],  [Stratego Compiler])
  XT_ARG_WITH([ssl],             [STRATEGOXT],           [DIR],  [Stratego Standard Library])
  XT_ARG_WITH([gpp],             [STRATEGOXT],           [DIR],  [GPP])
  XT_ARG_WITH([c-tools],         [STRATEGOXT],           [DIR],  [C Tools])
  XT_ARG_WITH([stratego-front],  [STRATEGOXT],           [DIR],  [Stratego Front])
  XT_ARG_WITH([asfix-tools],     [STRATEGOXT],           [DIR],  [AsFix Tools])
  XT_ARG_WITH([aterm-front],     [STRATEGOXT],           [DIR],  [ATerm Front])
  XT_ARG_WITH([sdf-front],       [STRATEGOXT],           [DIR],  [SDF Front])
  XT_ARG_WITH([sdf-tools],       [STRATEGOXT],           [DIR],  [SDF Tools])
  XT_ARG_WITH([concrete-syntax], [STRATEGOXT],           [DIR],  [Concrete Syntax])
  XT_ARG_WITH([xml-front],       [STRATEGOXT],           [DIR],  [XML Front])
  XT_ARG_WITH([stratego-regular],[STRATEGOXT],           [DIR],  [Stratego Regular])

  # Maybe this should be a separate macro.
  XT_ARG_WITH([strategoxt-utils],[STRATEGOXT],           [DIR],  [StrategoXT Utilities])
  XT_ARG_WITH([graph-tools],     [STRATEGOXT_UTILS],     [DIR],  [Graph Tools])
  XT_ARG_WITH([dot-tools],       [STRATEGOXT_UTILS],     [DIR],  [Dot Tools])
  XT_ARG_WITH([aterm-tools],     [STRATEGOXT_UTILS],     [DIR],  [ATerm Tools])
  XT_ARG_WITH([stratego-tools],  [STRATEGOXT_UTILS],     [DIR],  [Stratego Tools])

  # Make sure BUILD_REPOSITORY is an absolute path.
  case $BUILD_REPOSITORY in
    [[\\/]]* ) ;;
    *) BUILD_REPOSITORY=`pwd`/$BUILD_REPOSITORY ;;
  esac

  # Backward compatibility?
  AC_SUBST([SC], [$STRC])

  AC_DEFINE_UNQUOTED([XTC_REPOSITORY()],
                     [ATmakeString("$REPOSITORY")],
                     [Location of the XTC repository.])
])

AU_DEFUN([USE_XT_PACKAGES], [XT_USE_XT_PACKAGES])

############ SVN REVISION ########################################################

AC_DEFUN([XT_SVN_REVISION],
[
AC_MSG_CHECKING([for the SVN revision of the source tree])

if test -e ".svn"; then
   REVFIELD="1"
   SVN_REVISION=`svn status -v -N -q ./ | awk "{ if(\\\$NF == \".\") print \\\$$REVFIELD }"`
   AC_MSG_RESULT($SVN_REVISION)
else
  if test -e "svn-revision"; then
    SVN_REVISION="`cat svn-revision`"
    AC_MSG_RESULT($SVN_REVISION)
  else
    SVN_REVISION="0"
    AC_MSG_RESULT([not available, defaulting to 0])
  fi
fi
AC_SUBST([SVN_REVISION])

])

AU_DEFUN([DETECT_SVN_REVISION], [XT_SVN_REVISION])

############ Extended version numbers #############################################
AC_DEFUN([XT_PRE_RELEASE],
[
  AC_REQUIRE([XT_SVN_REVISION])
  VERSION="${VERSION}pre${SVN_REVISION}"
  PACKAGE_VERSION="${PACKAGE_VERSION}pre${SVN_REVISION}"
])

############ CPP defines of some common variables as ATerms #######################

AC_DEFUN([XT_TERM_DEFINE],
[
  AC_REQUIRE([XT_SVN_REVISION])

  AC_DEFINE([PACKAGE_NAME_TERM()],     [ATmakeString("@PACKAGE_NAME@")])
  AC_DEFINE([PACKAGE_TARNAME_TERM()],  [ATmakeString("@PACKAGE_TARNAME@")])
  AC_DEFINE([PACKAGE_VERSION_TERM()],  [ATmakeString("@PACKAGE_VERSION@")])
  AC_DEFINE([VERSION_TERM()],          [ATmakeString("@VERSION@")])
  AC_DEFINE([PACKAGE_BUGREPORT_TERM()],[ATmakeString("@PACKAGE_BUGREPORT@")])
  AC_DEFINE([SVN_REVISION_TERM()],     [ATmakeString("@SVN_REVISION@")])
])

############ TEST PACKAGES ########################################################

AC_DEFUN([XT_PKG_ATERM],
[
  XT_PROG_BAFFLE
  XT_LIB_ATERM
])

AC_DEFUN([XT_PKG_PGEN],
[
  XT_PROG_SDF2TABLE
])

AC_DEFUN([XT_PKG_SGLR],
[
  XT_PROG_SGLR
])

AC_DEFUN([XT_PKG_PT_SUPPORT],
[
  XT_PROG_IMPLODEPT
])

AC_DEFUN([XT_PKG_ASF_LIBRARY],
[
  AC_MSG_CHECKING([for asf-library at $ASF_LIBRARY/share/asf-library])
  test -d "$ASF_LIBRARY/share/asf-library"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find asf-library. Use --with-sdf or --with-asf-library.])
  fi
])

AC_DEFUN([XT_PKG_SDF],
[
  XT_PKG_PGEN
  XT_PKG_SGLR
  XT_PKG_PT_SUPPORT
  XT_PKG_ASF_LIBRARY
])

AC_DEFUN([XT_PKG_STRATEGOXT],
[
  XT_PROG_STRC
  XT_PROG_PACK_SDF
  XT_PROG_SDF2RTG
])

############ TEST PROGRAMS ##########################################################

AC_DEFUN([XT_PROG_SDF2TABLE],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sdf2table at $PGEN/bin/sdf2table])
  test -x "$PGEN/bin/sdf2table"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sdf2table. Use --with-sdf or --with-pgen.])
  fi
])

AC_DEFUN([XT_PROG_IMPLODEPT],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for implodePT at $PT_SUPPORT/bin/implodePT$EXEEXT])
  test -x "$PT_SUPPORT/bin/implodePT$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find implodePT. Use --with-sdf or --with-pt-support.])
  fi
])

AC_DEFUN([XT_PROG_SGLR],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sglr at $SGLR/bin/sglr$EXEEXT])
  test -x "$SGLR/bin/sglr$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sglr. Use --with-sdf or --with-sglr.])
  fi
])

AC_DEFUN([XT_PROG_BAFFLE],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for baffle at $ATERM/bin/baffle$EXEEXT])
  test -f "$ATERM/bin/baffle$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find baffle. Use --with-aterm.])
  fi
])

AC_DEFUN([XT_PROG_STRC],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for strc at $STRC/bin/strc$EXEEXT])
  test -x "$STRC/bin/strc$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find strc. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

AC_DEFUN([XT_PROG_PACK_SDF],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for pack-sdf at $STRC/bin/pack-sdf$EXEEXT])
  test -x "$SDF_FRONT/bin/pack-sdf$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find pack-sdf. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

AC_DEFUN([XT_PROG_SDF2RTG],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sdf2rtg at $STRC/bin/sdf2rtg$EXEEXT])
  test -x "$STRATEGO_REGULAR/bin/sdf2rtg$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sdf2rtg. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

############ TEST LIBRARIES ##########################################################
AC_DEFUN([XT_LIB_ATERM],
[
  AC_MSG_CHECKING([for libATerm-gcc at $ATERM/lib/libATerm-gcc.a])

  test -f $ATERM/lib/libATerm-gcc.a
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find libATerm-gcc.a. You must install the ATerm library with the option --with-gcc])
  fi
])
