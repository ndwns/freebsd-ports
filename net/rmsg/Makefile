# New ports collection makefile for:	rmsg
# Date created:		9 October 1995
# Whom:			torstenb@FreeBSD.org
#
# $FreeBSD$
#

PORTNAME=	rmsg
PORTVERSION=	1.64
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/tcpip/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A network messaging system

WRKSRC=		${WRKDIR}/rmsg
MAN1=		rmsg.1
MAN8=		rmsgd.8

.include <bsd.port.pre.mk>

.if ${OSVERSION} > 900007
BROKEN=		fails to build with new utmpx
.endif

.include <bsd.port.post.mk>
