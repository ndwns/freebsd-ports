# New ports collection makefile for:	rubygem-guard
# Date created:		2011-10-20
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	guard
PORTVERSION=	1.0.3
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line tool to easily handle events on file system modifications

RUN_DEPENDS=	rubygem-ffi>=0.5.0:${PORTSDIR}/devel/rubygem-ffi \
		rubygem-thor>=0.14.6:${PORTSDIR}/devel/rubygem-thor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/guard

.include <bsd.port.mk>
