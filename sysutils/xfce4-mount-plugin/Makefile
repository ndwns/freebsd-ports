# New ports collection makefile for: xfce4-mount-plugin
# Date created: 2012-04-17
# Whom: Olivier Duchateau <duchateau.olivier@gmail.com>
#
# $FreeBSD$
#

PORTNAME=	xfce4-mount-plugin
PORTVERSION=	0.6.4
CATEGORIES=	sysutils xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Mount and umount utility for the Xfce4 panel

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack intltool intlhack pkgconfig
USE_GETTEXT=	yes
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
USE_XFCE=	configenv libmenu panel

.include <bsd.port.mk>
