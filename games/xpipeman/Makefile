# New ports collection makefile for:    xpipeman
# Date created:         2 Jan 1995
# Whom:                 swallace
#
# $Id$
#

DISTNAME=       xpipeman
MASTER_SITES=	ftp://iraun1.ira.uka.de/pub/x11/
EXTRACT_SUFX=	.tar.Z
USE_IMAKE=	yes
INSTALL_MANPAGES= yes

.include <bsd.port.mk>

install:
	install -c -g games -m 664 ${.CURDIR}/files/xpipescores /usr/X11R6/lib/X11
