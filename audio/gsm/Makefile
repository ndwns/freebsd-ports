# New ports collection makefile for:	gsm
# Version required:     gsm-1.0.10
# Date created:		5 January 1995
# Whom:			pst
#
# $Id$
#

DISTNAME=       gsm-1.0.10
CATEGORIES=	audio
MASTER_SITES=	ftp://ftp.cs.tu-berlin.de/pub/local/kbs/tubmik/gsm/

MAINTAINER=	pst@FreeBSD.org

WRKSRC=         ${WRKDIR}/gsm-1.0-pl10

post-install:
	/sbin/ldconfig -m ${PREFIX}/lib

.include <bsd.port.mk>
