# New ports collection makefile for:	Irc Server
# Version required:	2.8.20
# Date created:		23 August 1994
# Whom:			torstenb
#
# $Id$
#

DISTNAME=	irc2.8.21
MASTER_SITES=	ftp://cs-ftp.bu.edu/irc/servers/
CATEGORIES+=	networking

pre-install:
	mkdir -p ${PREFIX}/bin
	mkdir -p ${PREFIX}/lib/ircd
	mkdir -p ${PREFIX}/man/man1
	mkdir -p ${PREFIX}/man/man8

.include <bsd.port.mk>
