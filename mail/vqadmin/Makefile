# New ports collection makefile for: vqadmin
# Date created:		29 Mar 2001
# Whom:			nbm
#
# $FreeBSD$
#

PORTNAME=	vqadmin
PORTVERSION=	2.3.6
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	A cgi-based Virtual Qmail Domains Administrator

BUILD_DEPENDS=	${LOCALBASE}/vpopmail/lib/libvpopmail.a:${PORTSDIR}/mail/vpopmail
RUN_DEPENDS=	${LOCALBASE}/vpopmail/lib/libvpopmail.a:${PORTSDIR}/mail/vpopmail

GNU_CONFIGURE=	YES
WANT_QMAIL=	yes

CGIBINDIR?=	www/cgi-bin-dist
WEBDATADIR?=	www/data-dist

CONFIGURE_ARGS=	--enable-cgibindir=${PREFIX}/${CGIBINDIR} \
		--enable-htmldir=${PREFIX}/${WEBDATADIR} \
		--enable-qmaildir=${QMAIL_PREFIX}

.include <bsd.port.pre.mk>

PLIST_SUB+=	CGIBINDIR=${CGIBINDIR} WEBDATADIR=${WEBDATADIR}

post-patch:
	@${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g" \
		${WRKSRC}/Makefile.in

.include <bsd.port.post.mk>
