# New ports collection makefile for:	oleo
# Version required:	1.6
# Date created:		3 September 1994
# Whom:			mr
#
# $Id$
#

DISTNAME=	oleo-1.6
CATEGORIES+=	math
MASTER_SITES=	ftp://prep.ai.mit.edu/pub/gnu/

HAS_CONFIGURE=yes

post-install:
	$(INSTALL_MAN) $(FILESDIR)/oleo.1 $(PREFIX)/man/man1
.if !defined(NOMANCOMPRESS)
	gzip -9nf $(PREFIX)/man/man1/oleo.1
.endif
	
.include <bsd.port.mk>
