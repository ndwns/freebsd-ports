# New ports collection makefile for:    vile
# Version required:     6.1
# Date created:         Fri Jun 21, 1996
# Whom:                 pgf
#
# $Id$
#

DISTNAME=       vile-6.1
CATEGORIES+=	editors
MASTER_SITES=   ftp://id.wing.net/pub/pgf/vile/

MAKEFILE=	makefile
GNU_CONFIGURE=	yes

post-install:
	gzip -9nf ${PREFIX}/man/man1/vile.1

.include <bsd.port.mk>
