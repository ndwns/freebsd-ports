# New ports collection makefile for:	p5-Exception-Class
# Date created:				15 October 2005
# Whom:	      				Rod Taylor <ports@rbt.ca>
#
# $FreeBSD$
#

PORTNAME=	Exception-Class-DBI
PORTVERSION=	1.01
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI Exception objects

RUN_DEPENDS=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

LICENSE_COMB=	dual
LICENSE=	ART10 GPLv1

PERL_MODBUILD=	yes

MAN3=		Exception::Class::DBI.3

.include <bsd.port.mk>
