# New ports collection makefile for:	p5-Net-Whois-Raw
# Date created:				March 25th 2002
# Whom:	      				Alex Kapranoff <kappa@freebsd.org.ua>
#
# $FreeBSD$
#

PORTNAME=	Net-Whois-Raw
PORTVERSION=	2.41
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Very simple Perl interface to query raw whois data

BUILD_DEPENDS=	p5-HTTP-Message>=0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-Net-IDN-Encode>=1:${PORTSDIR}/textproc/p5-Net-IDN-Encode \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		pwhois.1
MAN3=		Net::Whois::Raw.3

.include <bsd.port.mk>
