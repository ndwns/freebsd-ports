# New ports collection makefile for:   openvmps
# Date created:        6 October 2003
# Whom:                Craig Boston <craig@yekse.gank.org>
#
# $FreeBSD$
#

PORTNAME=	openvmps
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/vmps/vmpsd/${PORTVERSION}
DISTNAME=	vmpsd-${PORTVERSION}

MAINTAINER=	craig@yekse.gank.org
COMMENT=	A GPL implementation of the VMPS protocol

WRKSRC=		${WRKDIR}/vmpsd
USE_RC_SUBR=	vpmsd

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CONFIGURE_ARGS=--bindir=${PREFIX}/sbin

MAN1=		vmpsd.1

.include <bsd.port.pre.mk>

.if ${ARCH} == "amd64"
IGNORE=		does not run correctly on amd64 architecture, see ports/136376
.endif

post-install:
	${INSTALL_DATA} -m 644 ${WRKSRC}/vlan.db \
		${PREFIX}/etc/vmps.db.sample
	@if [ ! -f ${PREFIX}/etc/vmps.db ]; then \
		${CP} -p ${PREFIX}/etc/vmps.db.sample ${PREFIX}/etc/vmps.db ; \
	fi

.include <bsd.port.post.mk>
