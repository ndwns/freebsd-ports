# New ports collection makefile for:    xgrab
# Version required:     2.41
# Date created:         27 February 1995
# Whom:                 jmz
#
# $Id$
#

DISTNAME=	xgrabsc.2_41
PKGNAME=	xgrab-2.41
CATEGORIES+=	x11
MASTER_SITES=	ftp://ftp.ibp.fr/pub/X11/contrib/applications/

MAINTAINER=	jmz@FreeBSD.org

USE_IMAKE=	yes
MAKE_FLAGS=	BINDIR=${PREFIX}/bin MANDIR=${PREFIX}/man/man1 \
		XAPPLOADDIR=${PREFIX}/lib/X11/app-defaults  -f
# Needs to actually *run* xrdb
IS_INTERACTIVE=	yes
# "make depend" blows up
XMKMF=		xmkmf

.include <bsd.port.mk>
