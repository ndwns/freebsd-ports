#!/bin/sh
#
# $FreeBSD$

export CLASSPATH=`%%PREFIX%%/bin/classpath`
JAVAVM=%%JAVAVM%% javavm -jar %%JAVAJARDIR%%/saxon8.jar $@
