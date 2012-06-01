--- input-png.c.orig	2002-10-10 22:44:14.000000000 +0200
+++ input-png.c	2012-04-29 12:34:51.000000000 +0200
@@ -30,6 +30,7 @@
 #include "message.h"
 #include "xstd.h"
 #include <png.h>
+#include <pngpriv.h>
 #include "input-png.h"
 
 static volatile char rcsid[]="$Id$";
