# New ports collection makefile for:	Ruby-zoom
# Date created:		16 September 2005
# Whom:			Mitsuru YOSHIDA <mitsuru@riken.jp>
#
# $FreeBSD$
#

PORTNAME=	zoom
PORTVERSION=	0.4.1
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Ruby binding to the Z39.50 Object-Orientation Model (ZOOM)

LIB_DEPENDS=	yaz.4:${PORTSDIR}/net/yaz

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

CONFIGURE_ARGS+=	--with-opt-dir="${LOCALBASE}"

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
