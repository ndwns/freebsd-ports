# New ports collection makefile for:    PNG images library
# Version required:     0.96
# Date created:         5 Dec 1995
# Whom:                 ache
#
# $Id$
#

DISTNAME=       libpng-0.96
PKGNAME=        png-0.96
CATEGORIES=     graphics
MASTER_SITES=   ftp://ftp.uu.net/graphics/png/src/
EXTRACT_SUFX=   .tgz

MAINTAINER=     ache@FreeBSD.org

MAKEFILE=       makefile

post-install:
	/sbin/ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
