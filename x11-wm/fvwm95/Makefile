# New ports collection makefile for:	fvwm95-2
# Version required:	2.0.43a
# Date created:		Sa   1 Feb 1997 14:46:05 MET
# Whom:			Andreas Klemm <andreas@klemm.gtn.com>
#
# $Id$
#

DISTNAME=	fvwm95-2.0.43a-Autoconf
CATEGORIES=	x11
MASTER_SITES=	ftp://mitac11.uia.ac.be/pub/
EXTRACT_SUFX=	.tgz

MAINTAINER=	andreas@klemm.gtn.com

LIB_DEPENDS=	Xpm\\.4\\.:${PORTSDIR}/graphics/xpm
BUILD_DEPENDS=	/usr/local/lib/librplay.a:${PORTSDIR}/audio/rplay

USE_X11=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--includedir=/usr/local/include \
		--libdir=/usr/local/lib

post-configure:
	@${ECHO} "See the sample.fvwm95rc file in the files directory"

.include <bsd.port.mk>
