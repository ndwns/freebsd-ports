--- base64.c.orig	Sat Jul  6 10:22:29 2002
+++ base64.c	Sat Jul  6 10:22:51 2002
@@ -46,6 +46,7 @@
 static const char rcsid[] = "$Id$";
 #endif /* not lint */
 
+#include <sys/types.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
