# New ports collection makefile for:    linux_lib
# Version required:	0.1
# Date created:         
# Whom:                 erich@FreeBSD.org
#
# $Id$
#

DISTNAME=	linux_devel-0.1
CATEGORIES=	devel

MAINTAINER=	erich@FreeBSD.org

RUN_DEPENDS=	/compat/linux/lib/libc.so.5:${PORTSDIR}/emulators/linux_lib

PREFIX=		/compat/linux
WRKSRC=		${WRKDIR}

NO_MTREE=	yes
NO_BUILD=	yes
NO_EXTRACT=	yes
NO_WRKDIR=	yes

pre-install:
	@[ -d ${PREFIX} ] || ${MKDIR} ${PREFIX}

do-install:
	zcat ${DISTDIR}${DISTNAME}.tar.gz |(cd ${PREFIX}; pax -r)

.include <bsd.port.mk>
