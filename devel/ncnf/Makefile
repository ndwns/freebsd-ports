# New ports collection makefile for:	ncnf
# Date created:	   29 May 2005
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD$
#

PORTNAME=	ncnf
PORTVERSION=	3.0.1
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	skv@FreeBSD.org
COMMENT=	Generic configuration management library

LIB_DEPENDS=	strfunc.9:${PORTSDIR}/devel/libstrfunc

USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	YES
GNU_CONFIGURE=	yes

post-patch:
.ifdef NOPORTDOCS
	@${REINPLACE_CMD} -e '/^SUBDIRS =/s/doc//' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
