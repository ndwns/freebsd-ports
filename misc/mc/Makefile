# New ports collection makefile for:	mc
# Version required:	4.1.35
# Date created:		15 Jul 1995
# Whom:			torstenb@FreeBSD.ORG
#
# $Id$
#

DISTNAME=	mc-4.1.35
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	utils/file/managers/mc

MAINTAINER=	ports@FreeBSD.ORG

GNU_CONFIGURE=	YES
CONFIGURE_ARGS=	--with-ncurses --without-edit --without-subshell --disable-nls
CONFIGURE_ENV=	INSTALL="$${INSTALL} -c"
MAKE_ENV=	CCOPTS="$(CFLAGS)"
MAN1=		midc.1
MAN8=		mcserv.8

.include <bsd.port.mk>
