# New ports collection makefile for:    PNG images library
# Version required:     0.89c
# Date created:         5 Dec 1995
# Whom:                 ache
#
# $Id$
#

DISTNAME=       libpng-0.89c
PKGNAME=        png-0.89c
CATEGORIES=     graphics
MASTER_SITES=   ftp://ftp.uu.net/graphics/png/src/

MAINTAINER=     ache@FreeBSD.org

MAKEFILE=       makefile

post-install:
	/sbin/ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
