# New ports collection makefile for:    arena
# Version required:     0.97g
# Date created:         Dec 1 1995
# Whom:                 ache
#
# $Id$
#

DISTNAME=       arena-0.97g
CATEGORIES+=    www x11
MASTER_SITES=   ftp://ftp.w3.org/pub/arena/
DISTFILES=      arena-freebsd2.gz
EXTRACT_CMD=    gunzip
EXTRACT_BEFORE_ARGS= <
EXTRACT_AFTER_ARGS= > arena
NO_BUILD=       yes
NO_CONFIGURE=   yes
NO_PATCH=       yes

MAINTAINER=     ache@FreeBSD.ORG

NO_WRKSUBDIR=	yes

do-install:
	cd ${WRKDIR}; \
	${INSTALL} -c -m ${BINMODE} -o ${BINOWN} -g ${BINGRP} -s arena ${PREFIX}/bin

.include <bsd.port.mk>
