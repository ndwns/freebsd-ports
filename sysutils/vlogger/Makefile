# New ports collection makefile for:	sysutils/vlogger
# Date created:		18 August 2011
# Whom:			Linh Pham <question+fbsdports@closedsrc.org>
#
# $FreeBSD$
#

PORTNAME=	vlogger
PORTVERSION=	1.3
CATEGORIES=	sysutils perl5
MASTER_SITES=	http://n0rp.chemlab.org/${PORTNAME}/

MAINTAINER=	question+fbsdports@closedsrc.org
COMMENT=	Logging utility for Apache servers with many virtual hosts

LICENSE=	GPLv2

RUN_DEPENDS=	${SITE_PERL}/${PERL_ARCH}/Bundle/DBI.pm:${PORTSDIR}/databases/p5-DBI

USE_PERL5=	yes
NO_BUILD=	yes

MAN1=		${PORTNAME}.1

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

post-install:
	${MKDIR} ${EXAMPLESDIR} ${DATADIR}
	@${INSTALL_DATA} ${WRKSRC}/${PORTNAME}-dbi.conf ${EXAMPLESDIR}/${PORTNAME}-dbi.conf
	@${INSTALL_DATA} ${WRKSRC}/mysql_create.sql ${DATADIR}/mysql_create.sql
	@${INSTALL_MAN} ${WRKSRC}/${MAN1} ${PREFIX}/man/man1/${MAN1}

.include <bsd.port.mk>
