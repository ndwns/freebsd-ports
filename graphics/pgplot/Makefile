# New ports collection makefile for:	pgplot
# Version required:     5.2
# Date created:		21 December 1996
# Whom:			jmz
#
# $Id$
#

DISTNAME=       pgplot5.2
PKGNAME=        pgplot-5.2
CATEGORIES=     graphics
MASTER_SITES=   ftp://astro.caltech.edu/pub/pgplot/

MAINTAINER=	jmz@FreeBSD.org

WRKSRC=		${WRKDIR}/pgplot

post-install:
	${LDCONFIG} -m ${PREFIX}/lib

.include <bsd.port.mk>
