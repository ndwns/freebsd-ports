# New ports collection makefile for:    xlife
# Version required:     3.0
# Date created:         15 March 1995
# Whom:                 asami
#
# $Id$
#

DISTNAME=       xlife
MASTER_SITES=	ftp://gatekeeper.dec.com/pub/X11/R5-contrib/
EXTRACT_SUFX=	.tar.Z
USE_IMAKE=      yes
PKGNAME=	xlife-3.0

pre-install:
	@(cd ${WRKSRC}; make install.patterns)

.include <bsd.port.mk>
