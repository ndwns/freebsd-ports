# New ports collection makefile for:    unarj
# Version required:     2.41
# Date created:         28 Dec 1994
# Whom:                 ache
#
# $Id$
#
DISTFILES=      unarj241.tar.Z
DISTNAME=       unarj
MASTER_SITES=	ftp://garbo.uwasa.fi/unix/arcers/

install:
	cd ${WRKSRC}; install -cs -o bin -g bin -m755 ${DISTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
