# New ports collection makefile for:   xrubik
# Version required:	5.3.2
# Date created:		20 October 1996
# Whom:			Yukihiro Nakai <nakai@mlab.t.u-tokyo.ac.jp>
#
# $Id$
#

DISTNAME=	xrubik
PKGNAME=	xrubik-5.3.2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/puzzles

MAINTAINER=	nakai@mlab.t.u-tokyo.ac.jp

USE_IMAKE=	yes

post-install:
	@chmod 755 ${PREFIX}/bin/xrubik
	@/usr/sbin/chown ${BINOWN}.${BINGRP} ${PREFIX}/bin/xrubik
	${INSTALL_DATA} ${WRKSRC}/Rubik.ad ${PREFIX}/lib/X11/app-defaults/Rubik

.include <bsd.port.mk>
