# New ports collection makefile for:	ree
# Date created:				7 Jul 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD$
#

PORTNAME=	ree
PORTVERSION=	1.3
CATEGORIES=	misc
MASTER_SITES=	http://gnu.ethz.ch/linuks.mine.nu/ree/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A tool to dump your ROM extensions

PLIST_FILES=	bin/rom-ree bin/fontdump
PORTDOCS=	readme

MAKE_JOBS_SAFE=	yes

ONLY_FOR_ARCHS=	i386 amd64

do-build:
.for f in ${PORTNAME} fontdump
	${CC} ${CFLAGS} ${WRKSRC}/${f}.c -o ${WRKSRC}/${f}
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/rom-${PORTNAME}
	${INSTALL_PROGRAM} ${WRKSRC}/fontdump ${PREFIX}/bin

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme ${DOCSDIR}
.endif

.include <bsd.port.mk>
