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

INSTALLS_SHLIB=	yes
USE_LIBTOOL=	yes
CONFIGURE_ARGS+= --with-LDFLAGS="-pthread"

MAN3=		mcrypt-nm.3

.include <bsd.port.mk>
