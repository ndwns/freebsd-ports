# New ports collection makefile for:    xearth
# Version required:     1.0
# Date created:         29 October 1995
# Whom:                 piero
#
# $Id$
#

DISTNAME=	xearth-1.0
CATEGORIES+=	x11
MASTER_SITES=	ftp://cag.lcs.mit.edu/pub/tuna/

USE_IMAKE=	yes

# Copy the list of FreeBSD sites
post-install:
	cp ${FILESDIR}/freebsd.markers ${PREFIX}/lib/X11

.include <bsd.port.mk>
