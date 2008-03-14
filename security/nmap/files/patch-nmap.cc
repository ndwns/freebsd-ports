--- nmap.cc.orig	Sat Dec 22 07:32:03 2007
+++ nmap.cc	Thu Jan 10 20:41:30 2008
@@ -99,6 +99,7 @@
 
 /* $Id$ */
 
+#include <getopt.h>
 #include "nmap.h"
 #include "osscan.h"
 #include "osscan2.h"
