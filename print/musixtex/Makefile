# New ports collection makefile for:    musixtex
# Version required:     T92
# Date created:         9 july 1995
# Whom:                 jmz
#
# $Id$
#

DISTNAME=       musixtex-T92
CATEGORIES=	print
MASTER_SITES=	ftp://ftp.tex.ac.uk/tex-archive/macros/musixtex/taupin/
DISTFILES=      musixtex-T92.tar.gz musixexa-T90.tar.gz

MAINTAINER=	jmz@FreeBSD.org

BUILD_DEPENDS=	tex:${PORTSDIR}/print/tex
RUN_DEPENDS=	tex:${PORTSDIR}/print/tex

NO_WRKSUBDIR=	yes

pre-install:
	${MKDIR} ${PREFIX}/share/texmf/documentation

.include <bsd.port.mk>
