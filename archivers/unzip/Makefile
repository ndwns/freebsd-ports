# New ports collection makefile for:    unzip
# Version required:     5.2
# Date created:         17 October 1994
# Whom:                 jmz
#
# $Id$
#

DISTNAME=       unzip-5.2
CATEGORIES=	archivers
MASTER_SITES=   ftp://quest.jpl.nasa.gov/pub/
DISTFILES=      unzip52.tar.Z

MAINTAINER=     ache@FreeBSD.ORG

MAKEFILE=       unix/Makefile
ALL_TARGET=     bsd
MAKE_FLAGS=     LOCAL_UNZIP="${CFLAGS}" \
		INSTALL="install -c -o bin -g bin" \
		prefix=${PREFIX} -f

.include <bsd.port.mk>
