# Ports collection makefile for: libv4l
# Date created: 13 January 2010
# Whom:         Andrew Thompson <thompsa@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	libv4l
PORTVERSION=	0.8.8
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://linuxtv.org/downloads/v4l-utils/
DISTNAME=	v4l-utils-${PORTVERSION}

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Video4Linux library

BUILD_DEPENDS=	v4l_compat>=1.0.20120501:${PORTSDIR}/multimedia/v4l_compat
LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg

MAKE_ARGS=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" LIBDIR="${PREFIX}/lib"
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/lib

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|$$(LIBDIR)/pkgconfig|${PREFIX}/libdata/pkgconfig|g' \
		-e 's|-lrt||g' \
		${WRKSRC}/libv4l1/Makefile \
		${WRKSRC}/libv4l2/Makefile \
		${WRKSRC}/libv4lconvert/Makefile
	@${RM} ${WRKSRC}/../include/linux/videodev2.h

.include <bsd.port.post.mk>
