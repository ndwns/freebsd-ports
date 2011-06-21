--- ./mktmptbl.c.orig	2011-06-21 16:04:16.000000000 +0200
+++ ./mktmptbl.c	2011-06-21 16:04:31.000000000 +0200
@@ -43,6 +43,7 @@
 static char RCSID[]="$Id$";
 
 #include <stdio.h>
+#include <string.h>
 #include "mktmptbl.h"
 
 ushort	tempTable[256][64];
