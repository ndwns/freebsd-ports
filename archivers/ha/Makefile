# New ports collection makefile for:    ha
# Version required:     0999
# Date created:         24 Jan 1995
# Whom:                 ache
#
# $Id$
#
DISTNAME=       ha0999
EXTRACT_SUFX=   .tgz
MASTER_SITES=   ftp://ftp.kiae.su/unix/arcers/
NO_WRKSUBDIR=   YES
MAKEFILE=       makefile.nix
MAKE_FLAGS=     CC=cc -f
ALL_TARGET=     ha
USE_GMAKE=      YES

install:
	cd ${WRKSRC}; ${INSTALL} ${COPY} ${STRIP} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} ha ${PREFIX}/bin
	@${TOUCH} ${TOUCH_FLAGS} ${INSTALL_COOKIE}

.include <bsd.port.mk>
