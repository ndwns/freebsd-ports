# New ports collection makefile for:	pidentd
# Version required:	2.5.1
# Date created:		19 Oct 1994
# Whom:			torstenb
#
# $Id$
#

DISTNAME=	pidentd-2.5.1
CATEGORIES+=	networking
MASTER_SITES=	ftp://ftp.lysator.liu.se/pub/ident/servers/ \
		ftp://ftp.fu-berlin.de/unix/security/ident/servers/

MAINTAINER=	torstenb@FreeBSD.ORG

post-install:
	gzip -9nf ${PREFIX}/man/man8/identd.8

.include <bsd.port.mk>
