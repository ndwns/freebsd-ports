--- contrib/tkserv/tkserv.c.orig	2008-08-27 18:10:46.000000000 +0200
+++ contrib/tkserv/tkserv.c	2008-08-27 18:11:01.000000000 +0200
@@ -29,6 +29,7 @@
 ** $Id$
 */
 
+#include <stdarg.h>
 #include "os.h"
 #undef strcasecmp
 #include "config.h"
