# New ports collection makefile for:	eclipse-aptana
# Date created:		2007-11-14
# Whom:			Nicola Vitale	<nivit@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	aptana
PORTVERSION=	2.0.5.1278522500
#PORTREVISION=	0
CATEGORIES=	java devel
MASTER_SITES=	http://nivi.interfree.it/distfiles/eclipse-aptana2/
PKGNAMEPREFIX=	eclipse-
DISTNAME=	com.aptana.ide.feature.studio-${PORTVERSION}-5-7857HJ97CFF61HN1HZHtem5tN7

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Aptana Studio 2 Web Development Tools (Eclipse plugin)

RUN_DEPENDS=	${LOCALBASE}/bin/eclipse:${PORTSDIR}/java/eclipse

CONFLICTS_INSTALL=	eclipse-aptana-1*

JAVA_VERSION=	1.5+

LATEST_LINK?=	${PKGNAMEPREFIX}aptana2

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

USE_JAVA=	yes
USE_ZIP=	yes

do-install:
	@(cd ${WRKDIR} && ${CP} -R features ${PREFIX}/lib/eclipse && ${CP} -R plugins ${PREFIX}/lib/eclipse;)

.include <bsd.port.mk>
