# New ports collection makefile for:    fftpack
# Version required:     ?
# Date created:         31 October 1996
# Whom:			Pedro Giffuni S.
#
# $Id$
#

DISTNAME=	bihar
PKGNAME=	fftpack-1.0
CATEGORIES=	math
MASTER_SITES=	ftp://netlib.bell-labs.com/netlib/
EXTRACT_SUFX=	.tar

MAINTAINER=	giffunip@asme.org

# ${DISTFILES} is automatically created from the directory contents
IGNOREFILES=	${DISTFILES}
EXTRACT_BEFORE_ARGS=	-xf

post-extract:
	gunzip $(WRKSRC)/*.f.gz

pre-build:
	${RM} $(WRKSRC)/.depend
	${CP} ${FILESDIR}/makefile.lib ${WRKSRC}/Makefile

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} $(PREFIX)/share/doc/fftpack
	gzip ${WRKSRC}*.doc
	${CP} $(WRKSRC)/doc.gz $(PREFIX)/share/doc/fftpack/
.endif
	${LDCONFIG} -m ${PREFIX}/lib

.include <bsd.port.mk>
