# New ports collection makefile for:	mirror
# Version required:	2.9
# Date created:		15 May 1995
# Whom:			torstenb
#
# $Id$
#

DISTNAME=	mirror-2.9
CATEGORIES=	net
MASTER_SITES=	ftp://src.doc.ic.ac.uk/computing/archiving/mirror/

MAINTAINER=	torstenb@FreeBSD.ORG

USE_PERL5=	yes
NO_WRKSUBDIR=	yes
MAKEFILE=	makefile
MAN1=		mirror.1 mirror-master.1


pre-install:
	${MKDIR} ${PREFIX}/lib/mirror

.include <bsd.port.mk>
