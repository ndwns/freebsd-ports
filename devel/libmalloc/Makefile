# New ports collection makefile for:	Mark Moraes malloc library
# Version required:	1.18
# Date created:		11 January 1995
# Whom:			jkh
#
# $Id$
#

DISTNAME=	malloc-1.18
PKGNAME=	libmalloc-1.18
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.cs.toronto.edu/pub/moraes/

post-install:
	/sbin/ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
