# Ports collection makefile for:    dhcp
# Version required:     ISC-DHCP-BETA-16
# Date created:         7 Mar 1996
# Whom:                 se
#
# $Id$
#

DISTNAME=       DHCPD-BETA-5.16
PKGNAME=	isc-dhcp-b5.16
CATEGORIES=	net
MASTER_SITES=   ftp://ftp.isc.org/isc/dhcp/

MAINTAINER=	jseger@freebsd.org

HAS_CONFIGURE=	yes

MAN5=		dhcpd.conf.5
MAN8=		dhcpd.8

post-install:
	touch /var/db/dhcpd.leases

.include <bsd.port.mk>
