# New ports collection makefile for:	p5-DBD-SQLite
# Date created:				2002/03/30
# Whom:					nork@cityfujisawa.ne.jp
#
# $FreeBSD$
#

PORTNAME=	DBD-SQLite
PORTVERSION=	1.37
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ADAMK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides access to SQLite3 databases through the DBI

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1.57:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=1.57:${PORTSDIR}/databases/p5-DBI

PERL_CONFIGURE=	yes

MAN3=		DBD::SQLite.3 DBD::SQLite::Cookbook.3

.include <bsd.port.mk>
