# New ports collection makefile for:    linux_lib
# Version required:	2.1
# Date created:         
# Whom:                 erich@FreeBSD.org
#
# $Id$
#

DISTNAME=	linux_lib-2.1
CATEGORIES=	emulators

MAINTAINER=	erich@FreeBSD.org

PREFIX=		/compat/linux/
WRKSRC=		${WRKDIR}
NO_MTREE=	yes

pre-install:
	@[ -d ${PREFIX} ] || ${MKDIR} ${PREFIX}

.include <bsd.port.mk>
