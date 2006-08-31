--- ./modules.c.orig	Mon Mar 20 10:51:27 2006
+++ ./modules.c	Tue Aug 29 20:59:12 2006
@@ -20,6 +20,7 @@
 	$Id$
 */
 
+#include <dlfcn.h>
 #include "quakedef.h"
 
 
