# New ports collection makefile for:    xcoral
# Version required:	2.5
# Date created:         
# Whom:                 erich@rrnet.com
#
# $Id$
#

DISTNAME=	xcoral-2.5
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	editors

MAINTAINER=	erich@FreeBSD.ORG

USE_IMAKE=	yes

post-extract:
	@mv ${WRKSRC}/config.h ${WRKSRC}/config.h.in
	@sed 's,@PREFIX@,${PREFIX},' ${WRKSRC}/config.h.in >${WRKSRC}/config.h

.include <bsd.port.mk>
