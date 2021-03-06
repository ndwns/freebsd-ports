# New ports collection makefile for:	libobjc2
# Date created:		7 October 2010
# Whom:			Pete French <pete@twisted.org.uk>
#
# $FreeBSD$
#

PORTNAME=	libobjc2
PORTVERSION=	1.6
CATEGORIES=	lang devel gnustep
MASTER_SITES=	http://download.gna.org/gnustep/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Replacement Objective-C runtime supporting Obj-C 2 features

BUILD_DEPENDS=	${LOCALBASE}/bin/as:${PORTSDIR}/devel/binutils

USE_BZIP2=	yes
USE_LDCONFIG=	yes
MAKE_ENV+=	LD=${LOCALBASE}/bin/ld
MAKE_ENV+=	SHLIB_VERSION="${SHLIB_VERSION}"
PLIST_SUB=	SHLIB=${SHLIB_VERSION}

OPTIONS=	NSOBJECT_ROOT	"Root class is NSObject not Object" On \
		LIBDISPATCH	"Build with libdispatch from ports" Off

SHLIB_VERSION?=	16

.include <bsd.port.options.mk>

.if defined(WITH_LIBDISPATCH)
LIB_DEPENDS+=	dispatch.0:${PORTSDIR}/devel/libdispatch
MAKE_ARGS+=	-DWITHOUT_TOYDISPATCH
PLIST_SUB+=	WITH_TOYDISPATCH="@comment "
.else
PLIST_SUB+=	WITH_TOYDISPATCH=""
.endif

.if !defined(WITHOUT_NSOBJECT_ROOT)
CPPFLAGS+=	-DGNUSTEP
.endif

.include <bsd.port.pre.mk>

.if ${OSVERSION} >= 900000
.if defined(CC) && ${CC:T:Mclang}
# all done
.else
# force clang
CC=	${LOCALBASE}/bin/clang
BUILD_DEPENDS+=	${LOCALBASE}/bin/clang:${PORTSDIR}/lang/clang
.endif
.endif

.if (${ARCH} == i386) || (${ARCH} == i486)
CFLAGS+=	-march=i586
.endif

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc: Unsupported relocation type 10
.endif

post-patch:
	${RM} ${WRKSRC}/GNUmakefile

post-install:
.if defined(WITH_LIBDISPATCH)
	${RM} ${PREFIX}/include/objc/toydispatch.h
.endif

.include <bsd.port.post.mk>
