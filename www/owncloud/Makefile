# New ports collection makefile for:	owncloud
# Date created:		14 October 2011
# Whom:			Kevin Lo <kevlo@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	owncloud
PORTVERSION=	4.0.1
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://owncloud.org/releases/

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A personal cloud which runs on your own server

BUILD_DEPENDS=	mp3info:${PORTSDIR}/audio/mp3info
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_PHP=	ctype curl dom gd hash json mbstring mysql pdo pdo_sqlite \
		session simplexml sqlite3 xml zip
WANT_PHP_WEB=	yes
DEFAULT_PHP_VER=5

WWWDOCROOT?=	www

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes
SUB_FILES=	pkg-message

do-install:
	${MKDIR} ${WWWDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}

post-install:
	@${CAT} ${PKGMESSAGE}
	@${FIND} -s -d ${WWWDIR} -type f -print | \
		${SED} -e "s#${PREFIX}/##g" >> ${TMPPLIST}
	@${FIND} -s -d ${WWWDIR} -type d  -print | \
		${SED} -E -e "s#${PREFIX}/#@dirrm #g" >> ${TMPPLIST}

.include <bsd.port.mk>
