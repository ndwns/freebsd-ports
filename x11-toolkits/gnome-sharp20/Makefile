# New ports collection makefile for:    gnome-sharp
# Date created:         		20061025
# Whom:                 		Tom McLaughlin <tmclaugh@FreeBSD.org>
#
# $FreeBSD$
#   $Id$
#

PORTNAME=	gnome-sharp
PORTVERSION=	2.16.0
CATEGORIES=	x11-toolkits
MASTER_SITES=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	sources/${PORTNAME}/2.16

MAINTAINER=	bsd-sharp-list@forge.novell.com
COMMENT=	GNOME interfaces for the .NET runtime

LATEST_LINK=	gnome-sharp20
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_PERL5_RUN=	yes
USE_GNOME=	gnomehack gnomepanel gtkhtml3 gtksharp20 librsvg2 vte

post-patch:
	@${FIND} ${WRKSRC} -name '*.pl' | ${XARGS} ${REINPLACE_CMD} -e \
		's|^#!/usr/bin/perl|#!${PERL}|'

.include "${.CURDIR}/../../lang/mono/bsd.mono.mk"
.include <bsd.port.mk>
