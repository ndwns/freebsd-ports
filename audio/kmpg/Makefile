# New ports collection makefile for:   kmpg
# Version required:    0.4.3a
# Date created:        23 May 1998
# Whom:                Hans Petter Bieker <hanspb@persbraten.vgs.no>
#
# $Id$
#

DISTNAME=	kmpg-0.4.3a
CATEGORIES=	audio kde
MASTER_SITES=	http://www.rhrk.uni-kl.de/~mvogt/linux/kmpg/download/

MAINTAINER=	tom@eborcom.com

LIB_DEPENDS=	kdecore.1:${PORTSDIR}/x11/kdelibs \
		kdeui.1:${PORTSDIR}/x11/kdelibs

USE_QT=		yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ENV=	CXXFLAGS="${CXXFLAGS}" \
		INSTALL_SCRIPT="${INSTALL_SCRIPT}"

.include <bsd.port.mk>
