# New ports collection makefile for:	fpc-fppkg
# Date created:				2012-03-16
# Whom:			Jose Alonso Cardenas Marquez <acm@FreeBSD.org>
#
# $FreeBSD$
#

PORTREVISION=	0
CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fppkg

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Free Pascal package unit

USE_FPC=	fcl-base fcl-process fcl-web fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR+=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
