# New ports collection makefile for:   yakuake
# Date created:                        7th September, 2008
# Whom:                                Shane Bell <decept0@gmail.com>
#
# $FreeBSD$
#

PORTNAME=	yakuake
PORTVERSION=	2.9.8
PORTREVISION=	3
CATEGORIES=	x11 kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4

MAINTAINER=	shanjobe@gmail.com
COMMENT=	Drop-down terminal emulator for KDE

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_KDE4=	kdelibs kdeprefix automoc4

.if defined(WITHOUT_NLS)
PLIST_SUB+=	NLS="@comment "
.else
PLIST_SUB+=	NLS=""
USE_GETTEXT=	yes
.endif

USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes

post-patch:
.if defined(WITHOUT_NLS)
	@${REINPLACE_CMD} -e 's/^%%NLS%%/# /' ${WRKSRC}/CMakeLists.txt
.else
	@${REINPLACE_CMD} -e 's/^%%NLS%%//' ${WRKSRC}/CMakeLists.txt
.endif

.include <bsd.port.mk>
