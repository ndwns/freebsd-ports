#!/bin/sh
#
# $FreeBSD$

export CLASSPATH=`%%PREFIX%%/bin/classpath`
javavm -jar %%JAVAJARDIR%%/saxon8.jar $@
