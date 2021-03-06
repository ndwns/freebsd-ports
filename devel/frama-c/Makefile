# New ports collection makefile for:    frama-c
# Date created:         25 May 2011
# Whom:                 b.f. <bf@FreeBSD.org>
#
# $FreeBSD$
#

PORTNAME=		frama-c
DISTVERSIONPREFIX=	Nitrogen-
DISTVERSION=		20111001
PORTREVISION=		2
CATEGORIES=		devel
MASTER_SITES=		http://frama-c.com/download/ LOCAL/bf

MAINTAINER=	bf@FreeBSD.org
COMMENT=	Extensible platform for source-code analysis of C

LICENSE=	LGPL21

GNU_CONFIGURE=	yes
MAKE_ENV+=	FRAMAC_LIBDIR="${PREFIX}/lib/frama-c"
MAN1=		frama-c.1 frama-c-gui.1
OPTIONS=	ALTERGO "Build wp plugin components that use Alt-Ergo" on \
		COQ	"Build wp plugin components that use Coq" off \
		GUI	"Build GUI" on \
		PLUGINS "Build bundled plugins" on
USE_GMAKE=	yes
USE_OCAML=	yes

.include <bsd.port.options.mk>

.if defined(WITH_ALTERGO)
.if !defined(WITH_PLUGINS)
IGNORE =	requires WITH_PLUGINS for WITH_ALTERGO
.endif
BUILD_DEPENDS +=	alt-ergo:${PORTSDIR}/math/alt-ergo
RUN_DEPENDS+=		alt-ergo:${PORTSDIR}/math/alt-ergo
.else
CONFIGURE_ENV +=	HAS_ALTERGO=no
.endif

.if defined(WITH_COQ)
.if !defined(WITH_PLUGINS)
IGNORE =	requires WITH_PLUGINS for WITH_COQ
.endif
BUILD_DEPENDS +=	coqc:${PORTSDIR}/math/coq
RUN_DEPENDS+=		coqc:${PORTSDIR}/math/coq
.else
CONFIGURE_ENV +=	HAS_COQ=no
.endif

.if defined(WITH_GUI)
.if !defined(WITH_PLUGINS)
IGNORE =	requires WITH_PLUGINS for WITH_GUI
.endif
BUILD_DEPENDS +=	lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
RUN_DEPENDS+=		lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
CONFIGURE_ARGS+=	--enable-gui
PLIST_SUB+=		GUI=""
.else
CONFIGURE_ARGS+=	--disable-gui
PLIST_SUB+=		GUI="@comment "
.endif

.if defined(WITH_PLUGINS)
BUILD_DEPENDS +=	dot:${PORTSDIR}/graphics/graphviz \
			ltl2ba:${PORTSDIR}/math/ltl2ba
RUN_DEPENDS+=	 	dot:${PORTSDIR}/graphics/graphviz \
			ltl2ba:${PORTSDIR}/math/ltl2ba
PLIST_SUB+=		PLUGINS=""
.else
CONFIGURE_ARGS+=	--with-no-plugin
PLIST_SUB+=		PLUGINS="@comment "
.endif

post-patch:
	@${MKDIR} ${WRKSRC}/tests/report \
		${WRKSRC}/tests/wp \
		${WRKSRC}/tests/wp_plugin \
		${WRKSRC}/tests/wp_acsl \
		${WRKSRC}/tests/wp_store \
		${WRKSRC}/tests/wp_hoare \
		${WRKSRC}/tests/wp_runtime \
		${WRKSRC}/tests/wp_bts \
		${WRKSRC}/tests/wp_engine
	@${REINPLACE_CMD} -e 's|@make |@${GMAKE} |' \
			${WRKSRC}/src/aorai/Makefile.in
	@${REINPLACE_CMD} \
		-e 's|$$(CP)|${INSTALL_DATA}|' \
		-e 's|add_prefix|addprefix|' \
			${WRKSRC}/share/Makefile.plugin
	@${REINPLACE_CMD} \
		-e '\|$$(CP) $$(TARGETS|s|$$(CP)|${INSTALL_DATA}|' \
		-e '\|$$(CP) frama-c|s|$$(CP)|${INSTALL_SCRIPT}|' \
			${WRKSRC}/share/Makefile.dynamic
	@${REINPLACE_CMD} -e '\|^# Installation|,\|^# File headers|{ \
		\|$$(CP).*bin|s|$$(CP)|${INSTALL_SCRIPT}|; \
		\|$$(CP) -R doc/manuals $$(FRAMAC_DATADIR)| \
		s||${MKDIR} $$(FRAMAC_DATADIR)/manuals ; \
		${INSTALL_DATA} doc/manuals/* $$(FRAMAC_DATADIR)/manuals|; \
		\|$$(CP).*man|s|$$(CP)\( -R\)*|${INSTALL_MAN}|; \
		\|$$(CP).*share|s|$$(CP)\( -R\)*|${INSTALL_DATA}|; \
		s|$$(CP)|${INSTALL_DATA}|; }' \
			${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's|HAS_ALTERGO=$$||' \
		-e '\|case $$ALTERGO_VERSION in|{N; s|0\.92\.2|0.94*|;}' \
		-e 's|HAS_COQ=$$||' \
			${WRKSRC}/configure

.if defined(WITH_GUI)
pre-configure:
	@(if [ ! -e ${LOCALBASE}/lib/ocaml/lablgtk2/gtkSourceView2.cmi -o \
	! -e ${LOCALBASE}/lib/ocaml/lablgtk2/gnomeCanvas.cmi ] ; then \
	${ECHO_MSG} "==> The WITH_GUI option for ${PKGNAME} requires" ; \
	${ECHO_MSG} "==> x11-toolkits/ocaml-lablgtk2 to be built" ; \
	${ECHO_MSG} "==> WITH_GNOMECANVAS and WITH_GTKSOURCEVIEW2" ; \
	exit 1; fi)
	@(if [ ! -e ${LOCALBASE}/lib/ocaml/ocamlgraph/dgraph.cmi ] ; then \
	${ECHO_MSG} "==> The WITH_GUI option for ${PKGNAME} requires" ; \
	${ECHO_MSG} "==> math/ocaml-ocamlgraph to be built WITH_GUI" ; \
	exit 1; fi)

.endif

post-install:
	@${TOUCH} ${PREFIX}/lib/frama-c/plugins/.keep_me \
	${PREFIX}/lib/frama-c/plugins/gui/.keep_me

.if defined(MAINTAINER_MODE)
check regression-test test: build
	@(cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} \
	FRAMAC_LIB=${WRKSRC}/lib/fc \
	FRAMAC_PLUGIN=${WRKSRC}/lib/plugins \
	FRAMAC_SHARE=${WRKSRC}/share \
	${GMAKE} ${_MAKE_JOBS} ${MAKE_ARGS} tests)

.endif

.include <bsd.port.mk>
