# New ports collection makefile for:	nntp
# Version required:	t5
# Date created:		29 September 1994
# Whom:			adam
#
# $Id$
#

DISTNAME=	nntp-t5
MASTER_SITES=	ftp://nic.sura.net/pub/news/software/nntp/
#DO_NADA=	echo ${.TARGET}:
#DEPENDS=	news/cnews

pre-configure:
	@cp ${WRKSRC}/conf.h.dist ${WRKSRC}/conf.h

.include <bsd.port.mk>
