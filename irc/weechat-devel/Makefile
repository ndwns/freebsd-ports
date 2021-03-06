# New ports collection makefile for:	weechat-devel
# Date created:			2010-01-06
# Whom:				Jase Thew <freebsd@beardz.net>
#
# $FreeBSD$
#

PORTNAME=	weechat
PORTVERSION=	20120610
CATEGORIES=	irc
MASTER_SITES=	http://perturb.me.uk/distfiles/
PKGNAMESUFFIX=	-devel
DISTNAME=	weechat-devel-${GITREV}

MAINTAINER=	jase@FreeBSD.org
COMMENT=	A lightweight and user friendly ncurses based IRC client

LICENSE=	GPLv3

CONFLICTS=	weechat-0.3*

USE_ICONV=	yes
USE_LDCONFIG=	yes
USE_NCURSES=	yes
WITH_NCURSES_BASE=	yes
USE_CMAKE=	yes
CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib
WANT_PERL=	yes

LIB_DEPENDS+=	curl:${PORTSDIR}/ftp/curl

GITREV=	9c5116b
WRKSRC=	${WRKDIR}/${PORTNAME}-${GITREV}

# Please note: the DEBUG option is *NOT* empty, it is utilised by
# bsd.cmake.mk to set the cmake build type to Debug instead of
# Release.

OPTIONS_DEFINE=	RUBY PYTHON PERL TCL LUA GUILE CHARSET BACKTRACE DEBUG ASPELL GNUTLS NLS DOCUMENTATION
OPTIONS_DEFAULT=CHARSET BACKTRACE DEBUG

BACKTRACE_DESC=	Enable crash backtraces
CHARSET_DESC=	Enable charset conversion support
DOCUMENTATION_DESC=	Build and install documentation
GUILE_DESC=	Enable Guile scripting support
LUA_DESC=	Enable Lua scripting support
PERL_DESC=	Enable Perl scripting support
PYTHON_DESC=	Enable Python scripting support
RUBY_DESC=	Enable Ruby scripting support
TCL_DESC=	Enable Tcl scripting support

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCHARSET}
PLIST_SUB+=	CHARSET=""
.else
CMAKE_ARGS+=	-DENABLE_CHARSET=no
PLIST_SUB+=	CHARSET="@comment "
.endif

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CMAKE_ARGS+=	-DENABLE_NLS=no
PLIST_SUB+=	NLS="@comment "
.endif

.if ${PORT_OPTIONS:MASPELL}
BUILD_DEPENDS+=	aspell:${PORTSDIR}/textproc/aspell
PLIST_SUB+=	ASPELL=""
.else
CMAKE_ARGS+=	-DENABLE_ASPELL=no
PLIST_SUB+=	ASPELL="@comment "
.endif

.if ${PORT_OPTIONS:MPYTHON}
USE_PYTHON=	-2.7
CMAKE_ARGS+=	-DBSD_PYTHON_CMD=${PYTHON_CMD} \
		-DBSD_PYTHON_VER=${PYTHON_VERSION}
PLIST_SUB+=	PYTHON=""
.else
CMAKE_ARGS+=	-DENABLE_PYTHON=no
PLIST_SUB+=	PYTHON="@comment "
.endif

.if ${PORT_OPTIONS:MRUBY}
USE_RUBY=	yes
CMAKE_ARGS+=	-DBSD_RUBY_CMD=${RUBY} \
		-DBSD_RUBY_VER=${RUBY_NAME}
PLIST_SUB+=	RUBY=""
.else
CMAKE_ARGS+=	-DENABLE_RUBY=no
PLIST_SUB+=	RUBY="@comment "
.endif

.if ${PORT_OPTIONS:MGNUTLS}
LIB_DEPENDS+=	gnutls:${PORTSDIR}/security/gnutls
.else
CMAKE_ARGS+=	-DENABLE_GNUTLS=no
.endif

.if ${PORT_OPTIONS:MPERL}
USE_PERL5=	yes
PLIST_SUB+=	PERL=""
.else
CMAKE_ARGS+=	-DENABLE_PERL=no
PLIST_SUB+=	PERL="@comment "
.endif

.if ${PORT_OPTIONS:MTCL}
USE_TCL=	83+
.include "${PORTSDIR}/Mk/bsd.tcl.mk"
CMAKE_ARGS+=	-DBSD_TCL_VER=${TCL_VER} \
		-DBSD_TCL_LIBDIR=${LOCALBASE}/lib \
		-DBSD_TCL_INCDIR=${TCL_INCLUDEDIR}
PLIST_SUB+=	TCL=""
.else
CMAKE_ARGS+=	-DENABLE_TCL=no
PLIST_SUB+=	TCL="@comment "
.endif

.if ${PORT_OPTIONS:MLUA}
USE_LUA=	5.0+
CMAKE_ARGS+=	-DBSD_LUA_VER=${LUA_VER} \
		-DBSD_LUA_LIBDIR=${LUA_LIBDIR} \
		-DBSD_LUA_INCDIR=${LUA_INCDIR}
PLIST_SUB+=	LUA=""
.else
CMAKE_ARGS+=	-DENABLE_LUA=no
PLIST_SUB+=	LUA="@comment "
.endif

.if ${PORT_OPTIONS:MGUILE}
IGNORE=		guile support currently causes a segfault on exit. Please re-run 'make config' and disable GUILE
LIB_DEPENDS+=	guile:${PORTSDIR}/lang/guile
PLIST_SUB+=	GUILE=""
.else
CMAKE_ARGS+=	-DENABLE_GUILE=no
PLIST_SUB+=	GUILE="@comment "
.endif

.if ${PORT_OPTIONS:MDOCUMENTATION}
BUILD_DEPENDS+=	asciidoc:${PORTSDIR}/textproc/asciidoc
BUILD_DEPENDS+=	source-highlight>=3.1.5:${PORTSDIR}/textproc/source-highlight
PLIST_SUB+=	DOCUMENTATION=""
.else
CMAKE_ARGS+=	-DENABLE_DOC=no
PLIST_SUB+=	DOCUMENTATION="@comment "
.endif

.if ${PORT_OPTIONS:MBACKTRACE}
LIB_DEPENDS+=	execinfo:${PORTSDIR}/devel/libexecinfo
.endif

MAN1=	weechat-curses.1

post-patch:
	@${REINPLACE_CMD} -e 's|$${LIBDIR}/../pkgconfig|$${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig|' ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e 's|INSTALL|#INSTALL|' ${WRKSRC}/doc/CMakeLists.txt
.for f in src/CMakeLists.txt src/core/CMakeLists.txt cmake/*.cmake
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/${f}
.endfor
.if empty(PORT_OPTIONS:MBACKTRACE)
	@${REINPLACE_CMD} -e '/IF.*FreeBSD/,/ENDIF.*FreeBSD/d' ${WRKSRC}/src/core/CMakeLists.txt
.endif

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/weechat-curses.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
