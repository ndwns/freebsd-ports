# New ports collection makefile for:    apache HTTPD
# Version required:     1.0.5
# Date created:         Fri Aug 25 16:42:36 CDT 1995
# Whom:                 erich@rrnet.com
#
# $Id$
#

DISTNAME=       apache_1.0.5
PKGNAME=        apache-1.0.5
DISTFILES=      ${DISTNAME}.tar.gz mod_env.c
EXTRACT_ONLY=   ${DISTNAME}.tar.gz
CATEGORIES+=	www
MASTER_SITES=	ftp://www.apache.org/apache/dist/
MASTER_SITES+=  ftp://www.apache.org/apache/dist/contrib/modules/

MAINTAINER=	pst@freebsd.org

post-extract:
	cp ${DISTDIR}/mod_env.c ${WRKSRC}/src

.include <bsd.port.mk>
