# New ports collection makefile for:   p5-PodToHTML
# Date created:                27 February 2004
# Whom:                        hrs@FreeBSD.org
#
# $FreeBSD$

PORTNAME=	PodToHTML
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Pod
PKGNAMEPREFIX=	p5-

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Generating HTML from several files containg POD documentation

BUILD_DEPENDS=	${SITE_PERL}/URI.pm:${PORTSDIR}/net/p5-URI \
		${SITE_PERL}/HTML/Element.pm:${PORTSDIR}/www/p5-HTML-Tree \
		${SITE_PERL}/${PERL_ARCH}/HTML/Entities.pm:${PORTSDIR}/www/p5-HTML-Parser \
		${SITE_PERL}/HTML/FormatPS.pm:${PORTSDIR}/textproc/p5-HTML-Format
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		podtohtml.1
MAN3=		Pod::HTML_Elements.3 \
		Pod::Links.3

.include <bsd.port.mk>
