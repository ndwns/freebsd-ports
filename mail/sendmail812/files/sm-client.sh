#!/bin/sh
#
# $FreeBSD$
# 
if ! test -x %%PREFIX%%/sbin/sendmail
then
	exit 0
fi
case $1 in
start)
	%%PREFIX%%/sbin/sendmail -L sm-msp-queue -Ac -q30m
	echo -n ' sm-msp-queue'
	;;
stop)
	kill `head -1 /var/spool/clientmqueue/sm-client.pid`
	rm -f /var/spool/clientmqueue/sm-client.pid
	;;
*)
	echo "Usage: $0: [ start | stop ]" 2>&1
	exit 65
	;;
esac
