# New ports collection makefile for:	magicpoint (with vflib)
# Version required:	1.03a
# Date created:		25 Dec 1997
# Whom:			Jun-ichiro itojun Itoh <itojun@itojun.org>
#
# $Id$
#

# can't use PORTSDIR here, since we haven't included bsd.port.mk
FILESDIR=	${.CURDIR}/../../misc/magicpoint/files
PATCHDIR=	${.CURDIR}/../../misc/magicpoint/patches
PKGDIR=		${.CURDIR}/../../misc/magicpoint/pkg
COMMENT=	${.CURDIR}/pkg/COMMENT

LIB_DEPENDS=	VFlib:${PORTSDIR}/japanese/vflib

PKGNAME=	ja-magicpoint-1.03a

.include <${.CURDIR}/../../misc/magicpoint/Makefile>

CATEGORIES=	japanese misc

MAINTAINER=	itojun@itojun.org

CONFIGURE_ARGS=	#intentionally empty
