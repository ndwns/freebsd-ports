# New ports collection makefile for:	Xaw3d
# Version required:	1.1
# Date created:		18 November 1994
# Whom:			asami
#
# $Id$
#

DISTNAME=	Xaw3d-1.1
CATEGORIES+=	x11
MASTER_SITES=	ftp://crl.dec.com/pub/X11/contrib/widgets/Xaw3d/R6/

MAINTAINER=	asami@FreeBSD.ORG

WRKSRC=		${WRKDIR}/lib/Xaw3d
USE_IMAKE=	yes

post-install:
	ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
