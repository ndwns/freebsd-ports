# New ports collection makefile for:	audiopreview
# Date created:		27 July 2010
# Whom:			kevlo 
#
# $FreeBSD$
#

PORTNAME=	audiopreview
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://audiopreview.codealpha.net/files/

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A command-line tool to play previews of audio and video files

USE_GMAKE=	yes
USE_GSTREAMER=	core
USE_GNOME=	intltool
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/audiopreview
MAN1=		audiopreview.1

.include <bsd.port.mk>
