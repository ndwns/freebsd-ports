# New ports collection makefile for:	godis
# Date created:				20 June , 2011
# Whom:					Grzegorz Blach <magik@roorback.net>
#
# $FreeBSD$
#

PORTNAME=	godis
PORTVERSION=	20120405
CATEGORIES=	databases
MASTER_SITES=	LOCAL/jlaffaye

MAINTAINER=	magik@roorback.net
COMMENT=	A Redis client library written in Go

USE_GO=		yes
GO_PKGNAME=	${SUBLIBDIR}/${PORTNAME}

SUBLIBDIR=	github.com/simonz05

do-install:
	${MKDIR} ${GO_LOCAL_LIBDIR}/${SUBLIBDIR}
	${INSTALL_DATA} ${GO_WRKDIR_PKG}/${SUBLIBDIR}/godis.a ${GO_LOCAL_LIBDIR}/${SUBLIBDIR}
	${MKDIR} ${GO_LOCAL_SRCDIR}/${GO_PKGNAME}
.for f in godis.go commands.go conn.go
	${INSTALL_DATA} ${GO_WRKSRC}/${f} ${GO_LOCAL_SRCDIR}/${GO_PKGNAME}
.endfor

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/go/files/bsd.go.mk"
.include <bsd.port.post.mk>
