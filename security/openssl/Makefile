# New ports collection makefile for:	Eric Young's SSL/Crypto Library
# Version required:	0.6.6
# Date created:		13 January 1997
# Whom:			markm
#
# $Id$
#
# NOTE!!! To use this port, you must have FreeBSD 2.2 or later, and you
#         must have the secure/ distribution loaded.

DISTNAME=		SSLeay-0.6.6
CATEGORIES=		devel security
MASTER_SITES=		ftp://psych.psy.uq.oz.au/pub/Crypto/SSL/

MAINTAINER=		markm@FreeBSD.ORG

RESTRICTED=		"Cryptography"
HAS_CONFIGURE=		yes
CONFIGURE_SCRIPT=	util/FreeBSD.sh
MAKEFILE=		Makefile.FreeBSD


post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/SSLeay
	@${INSTALL_DATA} ${WRKSRC}/doc/* ${PREFIX}/share/doc/SSLeay
.endif

.include <bsd.port.mk>
