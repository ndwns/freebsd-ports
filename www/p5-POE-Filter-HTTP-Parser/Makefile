# New ports collection makefile for:	POE-Filter-HTTP-Parser
# Date created:				25 Mar 2009
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	POE-Filter-HTTP-Parser
PORTVERSION=	1.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A HTTP POE filter for HTTP clients or servers

BUILD_DEPENDS=	p5-POE>=1.003:${PORTSDIR}/devel/p5-POE \
		p5-libwww>=0:${PORTSDIR}/www/libwww \
		p5-HTTP-Parser>=0.06:${PORTSDIR}/www/p5-HTTP-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-POE-Client-TCP>=0:${PORTSDIR}/devel/p5-Test-POE-Client-TCP \
		p5-Test-POE-Server-TCP>=0:${PORTSDIR}/devel/p5-Test-POE-Server-TCP

PERL_CONFIGURE=	yes

MAN3=		POE::Filter::HTTP::Parser.3

.include <bsd.port.mk>
