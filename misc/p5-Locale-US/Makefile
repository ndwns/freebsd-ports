# New ports collection makefile for:	p5-Locale-US
# Date created:		2008-07-31
# Whom:			Tomoyuki Sakurai <cherry@trombik.org>
#
# $FreeBSD$
#

PORTNAME=	Locale-US
PORTVERSION=	2.112.150
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Two letter codes for state identification in the United States

BUILD_DEPENDS=	p5-Data-Section-Simple>=0:${PORTSDIR}/devel/p5-Data-Section-Simple
RUN_DEPENDS=	p5-Data-Section-Simple>=0:${PORTSDIR}/devel/p5-Data-Section-Simple

PERL_CONFIGURE=	yes

MAN3=		Locale::US.3

.include <bsd.port.mk>
