--- wddx.c.orig	Mon Jul 26 08:56:21 2004
+++ wddx.c	Mon Jul 26 08:56:40 2004
@@ -18,6 +18,10 @@
 
 /* $Id$ */
 
+#ifdef HAVE_CONFIG_H
+# include "config.h"
+#endif
+
 #include "php.h"
 #include "php_wddx.h"
 
