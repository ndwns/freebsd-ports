# New ports collection makefile for:	boinc-setiathome-enhanced
# Date created:				26 March 2006
# Whom:					Rene Ladan <r.c.ladan@student.tue.nl>
# $FreeBSD$
#

PORTNAME=	boinc-setiathome-enhanced
PORTVERSION=	6.12
PORTREVISION=	5
CATEGORIES=	astro
MASTER_SITES=	ftp://rene-ladan.nl/pub/distfiles/
DISTNAME=	setiathome-svn-1008

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Setiathome Enhanced for BOINC

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/fftw3.h:${PORTSDIR}/math/fftw3
RUN_DEPENDS=	boinc_client:${PORTSDIR}/net/boinc-client
LIB_DEPENDS=	fftw3f:${PORTSDIR}/math/fftw3-float

USE_XZ=		yes
USE_AUTOTOOLS=	autoconf:env automake:env
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	pkgconfig

CFLAGS+=	-O2 -I${LOCALBASE}/include/boinc -I${LOCALBASE}/include \
		-L${LOCALBASE}/lib
.if defined(CPUTYPE)
CFLAGS+=	-march=${CPUTYPE}
.endif

# these must match settings in ${PORTSDIR}/net/boinc-client/Makefile
BOINC_CLIENT_USER?=	boinc
BOINC_CLIENT_GROUP?=	nobody
BOINC_CLIENT_HOME?=	/var/db/boinc

OPTIONS_DEFINE=	X11

X11_DESC=	Build screensaver (requires net/boinc-client with X11)

OPTIONS_DEFAULT=

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MX11}
LIB_DEPENDS+=	jpeg:${PORTSDIR}/graphics/jpeg \
		xcb:${PORTSDIR}/x11/libxcb
USE_GL=		gl glu glut
USE_XORG=	ice sm x11 xau xext xi xdamage xdmcp xfixes xmu xt xxf86vm
BUILD_DEPENDS+=	${LOCALBASE}/lib/libboinc_graphics2.a:${PORTSDIR}/net/boinc-client
PLIST_SUB+=	X11=""
.else
BUILD_DEPENDS+=	${LOCALBASE}/include/boinc/std_fixes.h:${PORTSDIR}/net/boinc-client
CONFIGURE_ARGS+=	--disable-graphics
PLIST_SUB+=	X11="@comment "
.endif

.if ${ARCH} == i386 || ${ARCH} == amd64
# comment out if world is built with clang and port with gcc
CFLAGS+=	-mtune=native
.endif

.if !empty(MACHINE_CPU:Maltivec)
CONFIGURE_ARGS+=	--enable-altivec
.endif

CONFIGURE_ENV+=	BOINCDIR="${NONEXISTENT}"

CONFIGURE_ARGS+=	--disable-static-client --disable-server \
			--disable-tests \
			--with-boinc-platform=${ARCH}-portbld-freebsd

SETI_SITE=	setiathome.berkeley.edu
SETI_BINARY=	setiathome-${PORTVERSION:S/.0/./}.${ARCH}-portbld-freebsd

SUB_FILES=	pkg-deinstall pkg-install pkg-message
SUB_LIST=	SETI_BINARY=${SETI_BINARY} \
		SETI_SITE=${SETI_SITE} \
		SETI_VERSION=${PORTVERSION:S/.//} \
		BOINC_CLIENT_HOME=${BOINC_CLIENT_HOME}
PLIST_SUB+=	SETI_BINARY=${SETI_BINARY} \
		SETI_SITE=${SETI_SITE} \
		BOINC_CLIENT_HOME=${BOINC_CLIENT_HOME} \
		PREFIX=${PREFIX}

# str_replace.h is included in newer versions of net/boinc-client,
# but it is not needed on FreeBSD
post-patch:
	${REINPLACE_CMD} -E -e "s|#include \"str_replace.h\"||" \
		${WRKSRC}/client/main.cpp \
		${WRKSRC}/client/sah_gfx.cpp \
		${WRKSRC}/client/seti.cpp \
		${WRKSRC}/client/timecvt.cpp \
		${WRKSRC}/db/xml_util.cpp

pre-configure:
	(cd ${WRKSRC} ; ./_autosetup)

do-install:
	${INSTALL} -d -o ${BOINC_CLIENT_USER} -g ${BOINC_CLIENT_GROUP} ${BOINC_CLIENT_HOME}/projects
	${INSTALL} -d -o ${BOINC_CLIENT_USER} -g ${BOINC_CLIENT_GROUP} \
	    ${BOINC_CLIENT_HOME}/projects/${SETI_SITE}
	${INSTALL_PROGRAM} -o ${BOINC_CLIENT_USER} -g ${BOINC_CLIENT_GROUP} \
	    ${WRKSRC}/client/${SETI_BINARY} ${BOINC_CLIENT_HOME}/projects/${SETI_SITE}/
.if ${PORT_OPTIONS:MX11}
	${INSTALL_PROGRAM} -o ${BOINC_CLIENT_USER} -g ${BOINC_CLIENT_GROUP} \
	    ${WRKSRC}/client/seti_graphics ${BOINC_CLIENT_HOME}/projects/${SETI_SITE}/
.endif

post-install:
	@PKG_PREFIX=${PREFIX} ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
