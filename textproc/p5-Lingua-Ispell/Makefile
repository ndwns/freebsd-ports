# New ports collection makefile for:    p5-Lingua-Ispell
# Date created:                         15 March 2001
# Whom:                                 -
#
# $FreeBSD$

PORTNAME=	Lingua-Ispell
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A Perl module that encapsulates access to the Ispell program

BUILD_DEPENDS=	${LOCALBASE}/bin/ispell:${PORTSDIR}/textproc/ispell
RUN_DEPENDS=	${LOCALBASE}/bin/ispell:${PORTSDIR}/textproc/ispell

PERL_CONFIGURE=	yes
REINPLACE_ARGS=	-i ''

MAN3=		Lingua::Ispell.3

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/lib/Lingua/Ispell.pm

.include <bsd.port.mk>
