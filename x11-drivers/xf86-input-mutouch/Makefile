# New ports collection makefile for:	xf86-input-mutouch
# Date Created:				17 Feb 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	xf86-input-mutouch
PORTVERSION=	1.3.0
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org mutouch input driver

XORG_CAT=	driver
USE_XORG=	xextproto videoproto
MAN4=		mutouch.4x

.if !defined(WITH_NEW_XORG)
IGNORE=		does not build with xorg-server 1.7.7
.else

.endif

.include <bsd.port.mk>
