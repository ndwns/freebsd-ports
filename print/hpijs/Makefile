# New ports collection makefile for:	hpijs
# Date created:		1 May 2002
# Whom:			ports@FreeBSD.org
#
# $FreeBSD$
#

PORTNAME=	hpijs
PORTVERSION=	2.1.4
PORTREVISION=	6
CATEGORIES=	print
MASTER_SITES=	SF/hpinkjet/${PORTNAME}/${PORTVERSION}

MAINTAINER=	dougb@FreeBSD.org
COMMENT=	Drivers and support resources for HP Inkjet Printers

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg

CONFLICTS=	hplip-[0-9]*

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=		--disable-dependency-tracking
USE_GHOSTSCRIPT_RUN=	yes
WANT_PERL=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS=	CUPS		"install support for cups" on \
		FOOMATIC	"install foomatic-rip and ppd files" on

.include <bsd.port.pre.mk>

.if defined(WITH_CUPS) || defined(WITH_FOOMATIC)
CONFLICTS+=	foomatic-filters-*
.endif

.if !defined(WITHOUT_CUPS)
LIB_DEPENDS+=		cups.2:${PORTSDIR}/print/cups-base
CONFIGURE_ARGS+=	--enable-cups-install
PLIST_SUB+=		CUPS=""
.else
CONFIGURE_ARGS+=	--disable-cups-install
PLIST_SUB+=		CUPS="@comment "
.endif

.if !defined(WITHOUT_FOOMATIC) || !defined(WITHOUT_CUPS)
USE_PERL5=		true
CONFIGURE_ARGS+=	--enable-foomatic-install
PLIST_SUB+=		FOOMATIC=""
.else
CONFIGURE_ARGS+=	--disable-foomatic-install
PLIST_SUB+=		FOOMATIC="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local/share/cups|${LOCALBASE}/share/cups|g ; \
		s|/usr/lib/cups/filter|${LOCALBASE}/libexec/cups/filter|g' \
			${WRKSRC}/configure

.if defined(WITHOUT_CUPS) && defined(WITHOUT_FOOMATIC)
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hpijs ${PREFIX}/bin
.else
INSTALL_TARGET=	install-exec install-foomatic
.endif

post-install:
.if !defined(WITHOUT_CUPS)
	@${LN} -s ${PREFIX}/bin/foomatic-rip ${LOCALBASE}/libexec/cups/filter/foomatic-rip
	@${LN} -s ${PREFIX}/share/ppd ${LOCALBASE}/share/cups/model/foomatic-ppds
.endif
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/gs_hpijs.png ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/hpijs_readme.html ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
