# New ports collection makefile for:	tcpblast
# Version required:	<self contained>
# Date created:		22 August 1994
# Whom:			mr
#
# $Id$
#

DISTNAME=	tcpblast
PKGNAME=	tcpblast-1.0
CATEGORIES=	networking

NO_EXTRACT=	yes
NO_WRKDIR=	yes

fetch:
	@${DO_NADA}

pre-clean:
	@echo "===>  Pre-clean for ${DISTNAME}"
	@(rm -f ${.CURDIR}/tcpblast)
	@(cd ${.CURDIR}/src; make clean)

.include <bsd.port.mk>
