# New ports collection makefile for:    tgif
# Version required:     3.0-p17
# Date created:         10 Oct 1996
# Whom:                 bmc@WillsCreek.COM
#
# $Id$
#

DISTNAME=	tgif-3.0-p17
PKGNAME=	tgif-3.0p17
CATEGORIES=	graphics
MASTER_SITES=	ftp://bourbon.cs.umd.edu/pub/tgif/ \
		ftp://ftp.cs.ucla.edu/pub/tgif/

MAINTAINER=	bmc@WillsCreek.COM

RUN_DEPENDS=	giftopnm:${PORTSDIR}/graphics/netpbm \
		pnmtotiff:${PORTSDIR}/graphics/netpbm \
		ppmtoxpm:${PORTSDIR}/graphics/netpbm \
		ppmtogif:${PORTSDIR}/graphics/netpbm \
		xbmtopbm:${PORTSDIR}/graphics/netpbm \
		xpmtoppm:${PORTSDIR}/graphics/netpbm

USE_IMAKE=      yes

.include <bsd.port.mk>
