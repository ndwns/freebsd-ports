# New ports collection makefile for:	mc
# Version required:	4.1.30
# Date created:		15 Jul 1995
# Whom:			torstenb@FreeBSD.ORG
#
# $Id$
#

DISTNAME=	mc-4.1.30
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	utils/file/managers/mc/devel

MAINTAINER=	ports@FreeBSD.ORG

GNU_CONFIGURE=	YES
CONFIGURE_ARGS=	--with-ncurses --without-edit --without-subshell --disable-nls
MAN1=		midc.1 mcedit.1
MAN8=		mcserv.8

.include <bsd.port.mk>
