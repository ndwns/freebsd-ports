# New ports collection makefile for:	xpm
# Version required:	3.4i
# Date created:		14 September 1994
# Whom:			jkh
#
# $Id$
#

DISTNAME=	xpm-3.4i
CATEGORIES+=	graphics x11
MASTER_SITES=	ftp://avahi.inria.fr/pub/xpm/

USE_IMAKE=	yes

post-install:
	ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
