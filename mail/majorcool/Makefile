# New ports collection makefile for:	majorcool
# Version required:		1.1.0
# Date created:			Wed Aug 13 18:34:14 CEST 1997
# Whom:				Andreas Klemm <andreas@klemm.gtn.com>
#
# $Id$
#

DISTNAME=	majorcool
PKGNAME=	majorcool-1.1.0
CATEGORIES=	mail
MASTER_SITES=	http://ncrinfo.ncr.com/pub/contrib/unix/MajorCool/

MAINTAINER=	andreas@FreeBSD.ORG

RUN_DEPENDS=	perl5.00401:${PORTSDIR}/lang/perl5

NO_BUILD=	yes
NO_PACKAGE=	"Too many questions"
WRKSRC=		${WRKDIR}

do-install:
		( cd ${WRKSRC}; ${SH} Configure )

.include <bsd.port.mk>
