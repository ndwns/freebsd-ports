# New ports collection makefile for:	libmcrypt-nm
# Date created:		Sat Jul 15 08:32:42 PDT 2000
# Whom:			nsayer@freebsd.org
#
# $FreeBSD$
#

PORTNAME=	libmcrypt-nm
PORTVERSION=	0.1.0
CATEGORIES=	security
MASTER_SITES=	http://mcrypt.hellug.gr/lib/

MAINTAINER=	ports@FreeBSD.org

USE_LIBTOOL=	yes
CONFIGURE_ENV=	CPPFLAGS="-D_THREAD_SAFE" LDFLAGS="-pthread"
INSTALLS_SHLIB=	yes

MAN3=		mcrypt-nm.3

.include <bsd.port.mk>
