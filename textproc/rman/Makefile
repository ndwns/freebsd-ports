# New ports collection makefile for:	rman
# Version required:     3.0.2a9
# Date created:         27 Dec 1994
# Whom:                 thomas@ghpc8.ihf.rwth-aachen.de
#
# $Id$
#

DISTNAME=       rman-3.0.2a9
CATEGORIES=	textproc
MASTER_SITES=   ftp://ftp.cs.berkeley.edu/ucb/people/phelps/tcltk/
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	thomas@ghpc8.ihf.rwth-aachen.de

NO_CDROM=	"Don't sell for profit"
MAN1=		rman.1

post-install:
	@strip ${PREFIX}/bin/rman

.include <bsd.port.mk>
