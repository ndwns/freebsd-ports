# New ports collection makefile for:    Mosaic
# Version required:     2.6
# Date created:         7 August 1995
# Whom:                 torstenb
#
# $Id$
#

DISTNAME=	Mosaic-src-2.6
PKGNAME=	mosaic-2.6
CATEGORIES=	www

MASTER_SITES=	ftp://ftp.ncsa.uiuc.edu/Web/Mosaic/Unix/source/

LIB_DEPENDS=    jpeg\\.6\\.:${PORTSDIR}/graphics/jpeg
WRKSRC=		${WRKDIR}/Mosaic-src
ALL_TARGET=	default

# don't waste diskspace
post-extract:
	@rm -rf ${WRKSRC}/libjpeg

.include <bsd.port.mk>
