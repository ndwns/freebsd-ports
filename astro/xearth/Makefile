#
# Makefile for x11/xearth (FreeBSD) - piero Sat Oct 29 12:37:15 PDT 1994
# $Id$
#

# Distribution stuff
DISTNAME=	xearth-0.92
MASTER_SITES=	ftp://cag.lcs.mit.edu/pub/tuna/
CATEGORIES+=	x11

USE_IMAKE=	is_set

# Copy the list of FreeBSD sites
pre-patch:
	cp ${FILESDIR}/freebsd.h ${WRKSRC}

.include <bsd.port.mk>
