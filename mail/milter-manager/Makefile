# New ports collection makefile for:	milter-manager
# Date created:		2009-05-17
# Whom:			Hirohisa Yamaguchi <umq@ueo.co.jp>
#
# $FreeBSD$
#

PORTNAME=	milter-manager
PORTVERSION=	1.8.3
CATEGORIES=	mail ruby
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME:S/-/%20/}/${PORTVERSION}

MAINTAINER=	umq@ueo.co.jp
COMMENT=	A super milter that can invoke several milters selectively

BUILD_DEPENDS=	${RUBY_SITEARCHLIBDIR}/glib2.so:${PORTSDIR}/devel/ruby-glib2
LIB_DEPENDS=	ev.4:${PORTSDIR}/devel/libev
RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/glib2.so:${PORTSDIR}/devel/ruby-glib2

USE_RC_SUBR=	milter-manager
GNU_CONFIGURE=	yes
MAKE_ARGS+=	pkgconfigdir=${PREFIX}/libdata/pkgconfig
CONFIGURE_ARGS=	CPPFLAGS="-I${LOCALBASE}/include" \
		--with-libev \
		LDFLAGS="-L${LOCALBASE}/lib -lintl"
USE_GMAKE=	yes
USE_GNOME=	glib20 intltool
USE_LDCONFIG=	yes
USE_RUBY=	yes
MAKE_JOBS_SAFE=	yes

## TEMPORARY DISABLED
#.if defined(WITH_LOG_ANALYZER)
#USE_APACHE=	22
#BUILD_DEPENDS+=	${RUBY_SITEARCHLIBDIR}/RRD.so:${PORTSDIR}/databases/rrdtool
#.endif
#.if defined(WITH_MILTER_MANAGER_ADMIN)
#USE_APACHE=	22
#RUN_DEPENDS+=	rubygem-passenger>=2.0.0:${PORTSDIR}/www/rubygem-passenger \
#		rubygem-rails>=2.3.2:${PORTSDIR}/www/rubygem-rails \
#		rubygem-sqlite3>=1.2.0:${PORTSDIR}/databases/rubygem-sqlite3
#USE_RUBY_FEATURES=	iconv
#.endif

MANLANG=	"" ja
MAN1=		milter-manager-log-analyzer.1 milter-manager.1 milter-performance-check.1 \
		milter-report-statistics.1 milter-test-client.1 milter-test-server.1

.include <bsd.port.mk>
