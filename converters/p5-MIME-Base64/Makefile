# New ports collection makefile for:    p5-MIME-Base64
# Version required:                     2.06
# Date created:                         June 21th 1997
# Whom:                                 ache@freebsd.org
#
# $Id$
#

DISTNAME=       MIME-Base64-2.06
PKGNAME=        p5-MIME-Base64-2.06
CATEGORIES=	converters perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN}
MASTER_SITE_SUBDIR=     MIME

MAINTAINER=	ports@FreeBSD.ORG

USE_PERL5=	YES

MAN3=           MIME::Base64.3 MIME::QuotedPrint.3
MAN3PREFIX=	${PREFIX}/lib/perl5/5.00501

do-configure:
		@ cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${PREFIX}/bin/perl Makefile.PL

.include <bsd.port.mk>
