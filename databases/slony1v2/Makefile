# New ports collection makefile for:	slony1
# Date created:		20 Jun 2004
# Whom:			Radim Kolar
#
# $FreeBSD$
#

PORTNAME=	slony1v2
PORTVERSION=	2.1.1
CATEGORIES=	databases
MASTER_SITES=	http://main.slony.info/downloads/2.1/source/
DISTNAME=	slony1-${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} \
		${DISTNAME}-docs${EXTRACT_SUFX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	PostgreSQL master to multiple replicas replication system

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:${PORTSDIR}/textproc/flex \
		${LOCALBASE}/bin/postmaster:${PORTSDIR}/databases/postgresql${PGSQL_VER}-server

GNU_CONFIGURE=	yes
USE_BISON=	build
USE_PGSQL=	yes
USE_GMAKE=	yes
USE_BZIP2=	yes
USE_RC_SUBR=	slon.sh

SUB_FILES=	pkg-message slon-mkservice.sh
SUB_LIST+=	NAME=slon

OPTIONS=	PERLTOOLS "Install perl configuration tools" Off

CONFLICTS?=	slony1-1*

.include <bsd.port.pre.mk>

IGNORE_WITH_PGSQL=	82

CONFIGURE_ENV=	FLEX=${LOCALBASE}/bin/flex

.if defined(WITH_PERLTOOLS)
USE_PERL5=	yes
CONFIGURE_ARGS+=--with-perltools=${LOCALBASE}/sbin
RUN_DEPENDS+=	${SITE_PERL}/${PERL_ARCH}/DBD/Pg.pm:${PORTSDIR}/databases/p5-DBD-Pg
BUILD_DEPENDS+=	${SITE_PERL}/${PERL_ARCH}/DBD/Pg.pm:${PORTSDIR}/databases/p5-DBD-Pg
PLIST_SUB+=	PERLTOOLS=""
SUB_LIST+=	PERLTOOLS=""
.else
PLIST_SUB+=	PERLTOOLS="@comment "
SUB_LIST+=	PERLTOOLS="@comment "
.endif

# let configure find postgres stuff in non-standard places
CONFIGURE_ARGS+=--with-pgconfigdir=${LOCALBASE}/bin \
		--with-pgbindir=${LOCALBASE}/bin \
		--with-pgincludedir=${LOCALBASE}/include \
		--with-pgincludeserverdir=${LOCALBASE}/include/postgresql/server \
		--with-pglibdir=${LOCALBASE}/lib \
		--with-pgpkglibdir=${LOCALBASE}/lib/postgresql \
		--with-pgsharedir=${LOCALBASE}/share/postgresql

.if !defined(NO_INSTALL_MANPAGES)
MAN1=	slon.1 slonik.1
.endif

DEFAULT_PGSQL_VER?=83

# Setting/finding PostgreSQL version we want.
.if exists(${LOCALBASE}/bin/postmaster)
PGSQL_VER!=	${LOCALBASE}/bin/postmaster -V | \
		${SED} -En 's/.*PostgreSQL[^0-9]*([0-9]+)\.([0-9]+)\..*/\1\2/p'
.elif exists(${LOCALBASE}/bin/pg_config)
PGSQL_VER!=	${LOCALBASE}/bin/pg_config --version | \
		${SED} -En 's/PostgreSQL[^0-9]*([0-9]*)\.([0-9]+)\..*/\1\2/p'
.else
PGSQL_VER=	${DEFAULT_PGSQL_VER}
.endif

.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${MKDIR} ${DOCSDIR}/adminguide
	@${MKDIR} ${DOCSDIR}/howto
	@${INSTALL_DATA} ${WRKSRC}/COPYRIGHT ${WRKSRC}/INSTALL ${WRKSRC}/SAMPLE ${WRKSRC}/README ${WRKSRC}/HISTORY-1.1 ${WRKSRC}/UPGRADING ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/howto/*.txt ${WRKSRC}/doc/howto/*.html ${DOCSDIR}/howto/
	@${INSTALL_DATA} ${WRKSRC}/doc/adminguide/*.html ${WRKSRC}/doc/adminguide/*.png ${DOCSDIR}/adminguide/
.endif
.if ! defined(NO_INSTALL_MANPAGES)
	${INSTALL_MAN} ${WRKSRC}/doc/adminguide/man1/*.1 ${MAN1PREFIX}/man/man1
.endif
	@${INSTALL_SCRIPT} ${WRKDIR}/slon-mkservice.sh ${PREFIX}/sbin/slon-mkservice
	@${INSTALL_DATA} ${FILESDIR}/slon.conf-sample ${PREFIX}/etc/
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
