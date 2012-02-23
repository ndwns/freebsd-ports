#!/bin/sh
# @(#) $Id$ (XSE)

# The ARDUINO version should (a) be in an include file and
# (b) should (at a minimum) be cpp friendly

if [ $# -ne 1 ]; then
	echo "usage: $0 version.txt" 1>&2
	exit 1
fi

version="`cat $1`" || exit 1

case "${version}" in

0*)
	echo "${version}"
	;;

*)
	echo "${version}" | /usr/bin/awk '{ print 100 * $0 }'
	;;
esac
