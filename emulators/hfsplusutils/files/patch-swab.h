--- libhfsp/src/swab.h.orig	Tue Mar  5 14:50:29 2002
+++ libhfsp/src/swab.h	Tue Nov 11 14:53:14 2003
@@ -24,8 +24,11 @@
  * $Id$
  */
 
-#include <endian.h>
-#include <byteswap.h> 
+#include <sys/endian.h>
+
+#define bswap_16 bswap16
+#define bswap_32 bswap32
+#define bswap_64 bswap64
 
  /* basic fuction:
     value = swab_inc(ptr);
