
$FreeBSD$

--- radius/RadiusMessage.cxx.orig	Thu Nov  8 00:43:39 2001
+++ radius/RadiusMessage.cxx	Sun Jan 19 01:35:13 2003
@@ -52,6 +52,8 @@
 static const char* const RadiusMessage_cxx_Version =
     "$Id$";
 
+#include <sys/types.h>
+#include <sys/socket.h>
 #include <netinet/in.h>
 #include <time.h>
 
