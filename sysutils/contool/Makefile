# New ports collection makefile for:    contool
# Version required:     1.25
# Date created:         2 Dec 1996
# Whom:                 nsayer@quack.kfu.com
#
# $Id$
#

DISTNAME=	contool-3.3a
CATEGORIES=	sysutils
MASTER_SITES=	http://melmac.corp.harris.com/files/
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	nsayer@quack.kfu.com

LIB_DEPENDS=	xview\\.3\\.:${PORTSDIR}/x11/xview-lib

NO_CDROM=	"source code cannot be sold, nor can you incorporate the source code into a product which is subsequently sold"
NO_WRKSUBDIR=	yes
USE_IMAKE=	yes


pre-install:
	@${MKDIR} ${PREFIX}/lib/help

post-install:
	@${CAT} ${PKGDIR}/MESSAGE

.include <bsd.port.mk>
