#!/bin/sh
#
# $FreeBSD$

IAM=`basename "$0"`

if [ "${IAM}" = "saxon-xquery" ]
then
	LAUNCHER_CLASS="net.sf.saxon.Query"
else
	LAUNCHER_CLASS="net.sf.saxon.Transform"
fi

JAVAVM=%%JAVAVM%% %%LOCALBASE%%/bin/javavm -classpath "`%%LOCALBASE%%/bin/classpath`" ${LAUNCHER_CLASS} $@
