#!/bin/sh
#
# $FreeBSD$
#

# PROVIDE: sapserver
# REQUIRE: NETWORKING
# KEYWORD: FreeBSD shutdown

#
# Add the following lines to /etc/rc.conf to enable sapserver:
#
#sapserver_enable="YES"
#
sapserver_enable="${sapserver_enable-NO}"

. %%RC_SUBR%%

name=sapserver
rcvar=`set_rcvar`

command=%%PREFIX%%/bin/${name}
required_files=%%PREFIX%%/etc/sap.cfg

load_rc_config ${name}
run_rc_command "$1"
