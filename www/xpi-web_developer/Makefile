# New ports collection makefile for:	xpi-web_developer
# Date created:			2006/05/06
# Whom:				chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD$
#

PORTNAME=	web_developer
PORTVERSION=	1.1.9
DISTVERSIONSUFFIX=	-fx+sm
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	An extension to add various web developer tools

XPI_NUM=	60
XPI_ID=		{c45c406e-ab73-11d8-be73-000a95be3b12}
XPI_FILES=	chrome/webdeveloper.jar chrome.manifest install.js \
		install.rdf license.txt
XPI_DIRS=	chrome

.include "../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
