# New ports collection makefile for:	Mark Moraes malloc library
# Version required:	1.17alpha
# Date created:		11 January 1995
# Whom:			jkh
#
# $Id$
#

DISTNAME=	malloc
PKGNAME=	malloc-1.17a
CATEGORIES+=	development programming libraries
MASTER_SITES=	ftp.cs.toronto.edu:/pub/moraes/

post-install:
	ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
