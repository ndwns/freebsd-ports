# ports collection makefile for:   libmikmod
# Version required:    3.1.6
# Date created:        Sun Apr 11 13:06:01 PDT 1999
# Whom:                Michael Haro <mharo@area51.fremont.ca.us>
#
# $Id$
#

DISTNAME=	libmikmod-3.1.6
CATEGORIES=	audio
MASTER_SITES=	http://www.multimania.com/miodrag/mikmod/

MAINTAINER=	mharo@FreeBSD.ORG

LIB_DEPENDS=	esd.1:${PORTSDIR}/audio/esound

USE_LIBTOOL=	yes
USE_GMAKE=	yes

pre-build:
	${RM} -rf ${WRKSRC}/info/mikmod.info-*

post-install:
	@${SETENV} OBJFORMAT=${PORTOBJFORMAT} ${LDCONFIG} -m ${PREFIX}/lib

.include <bsd.port.mk>
