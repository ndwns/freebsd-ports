# New ports collection makefile for:	netscape
# Version required:     3.0b4
# Date created:		21 August 1995
# Whom:			asami
#
# $Id$
#

DISTNAME=       netscape-3.0b4
CATEGORIES+=	www
MASTER_SITES=   ftp://ftp13.netscape.com/pub/navigator/3.0/3.0b4/unix/standard/
DISTFILES=      netscape-v30b4-export.i386-unknown-bsd.tar.gz

MAINTAINER=	jkh@FreeBSD.ORG

RESTRICTED=	"Commercial software."
NO_WRKSUBDIR=	yes

post-install:
	@cat ${PKGDIR}/DESCR

.include <bsd.port.mk>
