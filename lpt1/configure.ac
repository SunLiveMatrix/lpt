dnl Process this file with autoconf to produce a configure script.
dnl Created by Anjuta application wizard.

AC_INIT(lpt, 0.1)

AC_CONFIG_HEADERS([config.h])

SDL_REQUIRED=1.2.0

AM_INIT_AUTOMAKE([1.11])

AM_SILENT_RULES([yes])

AC_PROG_CC
AC_PATH_XTRA


AC_PROG_CPP
AC_PROG_CXX



dnl ***************************************************************************
dnl Internationalization
dnl ***************************************************************************
IT_PROG_INTLTOOL([0.35.0])

GETTEXT_PACKAGE=lpt
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", [GETTEXT package name])
AM_GLIB_GNU_GETTEXT


LT_INIT

dnl ***************************************************************************
dnl Check for SDL
dnl ***************************************************************************
AM_PATH_SDL($SDL_REQUIRED,
            :,
	    AC_MSG_ERROR([SDL version $SDL_REQUIRED not found]))
CXXFLAGS="$CXXFLAGS $SDL_CFLAGS"
CFLAGS="$CFLAGS $SDL_CFLAGS"
CPPFLAGS="$CPPFLAGS $SDL_CFLAGS"
LIBS="$LIBS $SDL_LIBS"


dnl ***************************************************************************
dnl Check for SDL_image
dnl ***************************************************************************
AC_CHECK_LIB(SDL_image, IMG_Load,
    [ LIBS="$LIBS -lSDL_image" ],
    AC_MSG_ERROR([SDL_image not found]))



dnl ***************************************************************************
dnl Check for SDL_gfx
dnl ***************************************************************************
AC_CHECK_LIB(SDL_gfx, SDL_initFramerate,
    [ LIBS="$LIBS -lSDL_gfx" ],
    AC_MSG_ERROR([SDL_gfx not found]))



dnl ***************************************************************************
dnl Check for SDL_ttf
dnl ***************************************************************************
AC_CHECK_LIB(SDL_ttf, TTF_OpenFont,
    [ LIBS="$LIBS -lSDL_ttf" ],
    AC_MSG_ERROR([SDL_ttf not found]))



dnl ***************************************************************************
dnl Check for SDL_mixer
dnl ***************************************************************************
AC_CHECK_LIB(SDL_mixer, Mix_OpenAudio,
    [ LIBS="$LIBS -lSDL_mixer" ],
    AC_MSG_ERROR([SDL_mixer not found]))



dnl ***************************************************************************
dnl Check for SDL_net
dnl ***************************************************************************
AC_CHECK_LIB(SDL_net, SDLNet_Init,
    [ LIBS="$LIBS -lSDL_net" ],
    AC_MSG_ERROR([SDL_net not found]))


AC_OUTPUT([
Makefile
src/Makefile
po/Makefile.in
])
