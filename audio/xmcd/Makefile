# New ports collection makefile for:	xmcd
# Version required:	2.4
# Date created:		16 Februar 1995
# Whom:			Gennady Sorokopud <gena@NetVision.net.il>
#
# $Id$
#

DISTNAME=	xmcd-2.4
CATEGORIES=	audio
MASTER_SITES=	http://mercury.hypersurf.com/~amb/download/xmcd/src/

MAINTAINER=	eischen@vigrid.com

REQUIRES_MOTIF=	yes
USE_IMAKE=	yes

MAN1=		cddbcmd.1 wm2xmcd.1 xmcd.1 cda.1
MANCOMPRESSED=	no

post-extract:
	@chmod -R u+w ${WRKSRC}

pre-patch:
	@${CP} ${WRKSRC}/xmcd_d/XMcd.ad ${WRKSRC}/xmcd_d/XMcd.ad.in

post-patch:
	@${SED} -e "s;@PREFIX@;${PREFIX};g" ${WRKSRC}/xmcd_d/XMcd.ad.in \
		> ${WRKSRC}/xmcd_d/XMcd.ad

post-install:
	@${CAT} ${PKGDIR}/MESSAGE

.include <bsd.port.mk>
