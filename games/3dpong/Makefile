# New ports collection makefile for:	3dpong
# Date created:				10 March 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD$
#

PORTNAME=	3dpong
PORTVERSION=	0.5
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.billsgames.com/unix/x/3dpong/src/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X Window 3D Pong game for 1 or 2 players with a ball and paddles

LICENSE=	GPLv2

USE_XORG=	x11
USE_GMAKE=	yes
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
		XLIB="-L${LOCALBASE}/lib -lX11"

post-patch:
	@${REINPLACE_CMD} -e \
		's|cat sounds/|cat ${DATADIR}/|g' ${WRKSRC}/src/3dpong.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/3dpong ${PREFIX}/bin
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/sounds/*.au ${DATADIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in AUTHORS.txt CHANGES.txt INSTALL.txt README.txt TODO.txt
	${INSTALL_DATA} ${WRKSRC}/docs/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
