# New ports collection makefile for:    ncftp2
# Version required:     2.4.2
# Date created:         4 Nov 1994
# Whom:                 ache
#
# $Id$
#

DISTNAME=       ncftp-2.4.2
CATEGORIES+=	net
MASTER_SITES=   ftp://ftp.probe.net/pub/ncftp/

MAINTAINER=	ache@FreeBSD.ORG

GNU_CONFIGURE=  yes
CONFIGURE_ENV=  ac_cv_func_getmaxyx=yes

do-install:
	$(INSTALL_PROGRAM) $(WRKSRC)/ncftp $(PREFIX)/bin/ncftp2
	$(INSTALL_MAN) $(WRKSRC)/ncftp.1 $(PREFIX)/man/man1/ncftp2.1
.if !defined(NOMANCOMPRESS)
	gzip -9nf ${PREFIX}/man/man1/ncftp2.1
.endif

.include <bsd.port.mk>
