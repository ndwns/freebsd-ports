# New ports collection makefile for:    less
# Version required:     2.90
# Date created:         8 Nov 1994
# Whom:                 ache
#
# $Id$
#

DISTNAME=       less-290
CATEGORIES+=	misc
MASTER_SITES=   ftp://prep.ai.mit.edu/pub/gnu/ ftp://ftp.uu.net/systems/gnu/

MAINTAINER=	ache@FreeBSD.ORG

GNU_CONFIGURE=	yes

EXTRA_PATCH=	patch-ab

pre-clean:
	@rm -f ${PATCHDIR}/${EXTRA_PATCH}

.if defined(COLOUR_LESS) || defined(COLOR_LESS)
pre-patch:
	@echo "Making a colour version of less."
	@cp ${FILESDIR}/${EXTRA_PATCH} ${PATCHDIR}
.endif

.include <bsd.port.mk>
