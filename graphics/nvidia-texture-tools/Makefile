# New ports collection makefile for:	nvidia-texture-tools
# Date created:		06 Mar 2009
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=	nvidia-texture-tools
DISTVERSION=	2.0.8-1
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Texture Tools with support for DirectX 10 texture formats

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png \
		jpeg.11:${PORTSDIR}/graphics/jpeg \
		tiff.4:${PORTSDIR}/graphics/tiff \
		IlmImf.6:${PORTSDIR}/graphics/OpenEXR

USE_CMAKE=	yes
CMAKE_ARGS=	-DNVTT_SHARED=TRUE
MAKE_JOBS_SAFE=	yes

CFLAGS+=	-fPIC -I${LOCALBASE}/include/libpng15
CXXFLAGS+=	-fPIC -I${LOCALBASE}/include/libpng15

WRKSRC=		${WRKDIR}/${PORTNAME}

PORTDOCS=	NVIDIA_Texture_Tools_README.txt ChangeLog

OPTIONS=	COMPRESSUI "Build compressor UI (requires Qt4)" off

.include <bsd.port.options.mk>

.if defined(WITH_COMPRESSUI)
# *_build stuff is not really needed, but cmake's Qt finder won't work otherwise
USE_QT4=	qmake_build moc_build uic_build rcc_build corelib gui opengl
PLIST_SUB+=	COMPRESSUI=""
.else
PLIST_SUB+=	COMPRESSUI="@comment "
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64" || ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
BROKEN=		does not build
.endif

post-patch:
.if defined(WITH_COMPRESSUI)
	@${REINPLACE_CMD} -e '/FIND_PACKAGE.*Qt4/ s|)$$| REQUIRED&|' \
		${WRKSRC}/src/CMakeLists.txt
.else
	@${REINPLACE_CMD} -e '/FIND_PACKAGE.*Qt4/ d' \
		${WRKSRC}/src/CMakeLists.txt
.endif

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
