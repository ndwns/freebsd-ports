# New ports collection makefile for:	pine
# Version required:	3.91
# Date created:		03 September 1994
# Whom:			mr
#
# $Id$
#

DISTNAME=	pine3.91
PKGNAME=	pine-3.91
CATEGORIES+=	mail
MASTER_SITES=	ftp://ftp.cac.washington.edu/pine/
EXTRACT_SUFX=	.tar.Z

post-install:
	gzip -9nf ${PREFIX}/man/man1/pine.1
	gzip -9nf ${PREFIX}/man/man1/pico.1
	gzip -9nf ${PREFIX}/man/man8/imapd.8c
	gzip -9nf ${PREFIX}/man/man8/ipopd.8c

.include <bsd.port.mk>
