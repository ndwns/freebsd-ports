# Ports collection makefile for:  wormux
# Date created:			  Thu Dec 16 18:46:55 EET 2004
# Whom:				  Anton Yudin <toha@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	warmux
DISTVERSION=	11.04.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://download.gna.org/${PORTNAME}/ \
		http://download.gna.org/${PORTNAME}/archive/

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Wormux game

LIB_DEPENDS=	xml++-2.6.2:${PORTSDIR}/textproc/libxml++26 \
		curl:${PORTSDIR}/ftp/curl

CONFLICTS=	wormux-*

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_SDL=	sdl image mixer ttf gfx net
MAKE_JOBS_SAFE=	yes
USE_DOS2UNIX=	fixed_class.h

MANCOMPRESSED=	no
MAN6=		warmux.6

OPTIONS+=	NLS "Native Language Support via gettext utilities" on \
		FRIBIDI "Enable bi-directional unicode support" off \
		SERVER "Enable dedicated server" off

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION:R}

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e "s,-Werror,," ${WRKSRC}/Makefile.in \
	${WRKSRC}/src/Makefile.in
	${REINPLACE_CMD} -e "s,warmux_files.desktop,," ${WRKSRC}/data/Makefile.in
	${FIND} -d ${WRKSRC}/data/ -name "*.*~" -delete

.if defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug \
			--enable-logging
.endif

.if !defined(WITHOUT_NLS)
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.if defined(WITH_SERVER)
PLIST_SUB+=	SERVER=""
CONFIGURE_ARGS+=	--enable-servers
.else
PLIST_SUB+=	SERVER="@comment "
.endif

.if defined(WITH_FRIBIDI)
LIB_DEPENDS+=	fribidi:${PORTSDIR}/converters/fribidi
CONFIGURE_ARGS+=	--enable-fribidi
.else
CONFIGURE_ARGS+=	--disable-fribidi
.endif

.include <bsd.port.mk>
