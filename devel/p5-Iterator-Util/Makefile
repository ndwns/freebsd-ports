# New ports collection makefile for:	Iterator-Util
# Date created:				18 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	Iterator-Util
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Essential utilities for the Iterator class

BUILD_DEPENDS=	p5-Iterator>=0:${PORTSDIR}/devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator::Util.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
