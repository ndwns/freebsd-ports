# New ports collection makefile for:	bash
# Version required:     1.14.5
# Date created:		21 August 1994
# Whom:			jkh
#
# $Id$
#

DISTNAME=       bash-1.14.5
CATEGORIES+=	shells
MASTER_SITES=   ftp://slc2.ins.cwru.edu/pub/dist/

MAINTAINER=     ache@FreeBSD.ORG

post-install:
.if !defined(NOMANCOMPRESS)
	gzip -9nf ${PREFIX}/man/man1/bash.1 ${PREFIX}/man/man1/bash_builtins.1
.endif

.include <bsd.port.mk>
