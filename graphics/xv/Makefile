# New ports collection makefile for:	xv
# Version required:	3.10a
# Date created:		30 October 1994
# Whom:			smace
#
# $Id$
#

DISTNAME=	xv-3.10a
CATEGORIES+=	graphics x11
MASTER_SITES=	ftp://ftp.cis.upenn.edu/pub/xv/

LIB_DEPENDS=    jpeg\\.6\\.:${PORTSDIR}/graphics/jpeg \
		tiff\\.3\\.:${PORTSDIR}/graphics/tiff

USE_IMAKE=	yes

post-install:
	mkdir -p ${PREFIX}/share/doc/xv
	cp ${WRKSRC}/README ${PREFIX}/share/doc/xv

.include <bsd.port.mk>
