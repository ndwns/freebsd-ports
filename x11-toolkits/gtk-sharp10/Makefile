# New ports collection makefile for:    gtk-sharp
# Date created:         2003-01-01
# Whom:                 Juli Mallett
#
# $Id$
# $FreeBSD$
#

PORTNAME=	gtk-sharp
PORTVERSION=	1.0.10
PORTREVISION=	2
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://go-mono.com/sources/${PORTNAME}/

MAINTAINER=	bsd-sharp-list@forge.novell.com
COMMENT=	GTK+ and GNOME interfaces for the .NET runtime

BUILD_DEPENDS=	mono:${PORTSDIR}/lang/mono
RUN_DEPENDS=	mono:${PORTSDIR}/lang/mono

USE_X_PREFIX=	yes
LATEST_LINK=	gtk-sharp10
USE_LIBTOOL_VER=15
USE_REINPLACE=	yes
INSTALLS_SHLIB=	yes
USE_GMAKE=	yes
USE_PERL5_RUN=	yes
USE_GNOME=	gnomehack libgnomedb gtkhtml3 vte librsvg2

MAKE_ENV=MONO_SHARED_DIR=${WRKDIR}

post-patch:
	@${FIND} ${WRKSRC} -name '*.pl' | ${XARGS} ${REINPLACE_CMD} -e \
		's|^#!/usr/bin/perl|#!${PERL}|'

pre-su-install:
	${MKDIR} ${LOCALBASE}/share/gapi

.include <bsd.port.mk>
