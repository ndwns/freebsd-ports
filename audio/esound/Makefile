# New ports collection makefile for:	esound
# Version required:	0.2.8
# Date created:		19 July 1998
# Whom:			Vanilla I. Shu <vanilla@FreeBSD.ORG>
#
# $Id$
#

DISTNAME=	esound-0.2.8
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GNOME}
MASTER_SITE_SUBDIR=	esound

MAINTAINER=	vanilla@FreeBSD.ORG

LIB_DEPENDS=	audiofile.0:${PORTSDIR}/audio/libaudiofile

GNU_CONFIGURE=	yes

post-install:
	@${SETENV} OBJFORMAT=${PORTOBJFORMAT} ${LDCONFIG} -m ${PREFIX}/lib

.include <bsd.port.mk>
