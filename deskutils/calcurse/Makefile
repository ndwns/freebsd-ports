# Ports collection makefile for:	calcurse
# Date created:                         Nov 1, 2005
# Whom:                                 Herbert J. Skuhra <h.skuhra@gmail.com>
#
# $FreeBSD$

PORTNAME=	calcurse
PORTVERSION=	2.9.2
CATEGORIES=	deskutils
MASTER_SITES=	http://calcurse.org/files/ \
		ftp://ftp2.culot.org/culot/

MAINTAINER=	culot@FreeBSD.org
COMMENT=	A text-based calendar and scheduling application

LICENSE=	BSD

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--without-asciidoc

MAN1=		calcurse.1

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.endif

post-patch:
.if !defined(NOPORTDOCS)
	${REINPLACE_CMD} -e \
		's|^docdir = .*|docdir = ${DOCSDIR}|' \
		${WRKSRC}/doc/Makefile.in
.else
CONFIGURE_ARGS+=	--disable-docs
.endif

post-install:
.if defined(NOPORTDOCS)
.for file in ${MAN1}
	@${INSTALL_MAN} ${WRKSRC}/doc/${file} ${MANPREFIX}/man/man1
.endfor
.endif

.include <bsd.port.mk>
