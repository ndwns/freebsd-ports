--- plugins-scripts/check_ifstatus.pl.orig	Wed May  8 06:58:22 2002
+++ plugins-scripts/check_ifstatus.pl	Fri Jul 19 21:28:46 2002
@@ -27,7 +27,7 @@
 #
 # $Id$
 
-use POSIX;
+#use POSIX;
 use strict;
 use lib utils.pm ;
 use utils qw($TIMEOUT %ERRORS &print_revision &support);
