--- rpcc/scan.ll.orig	Sat Jan 27 03:43:23 2001
+++ rpcc/scan.ll	Sun Dec  1 23:45:45 2002
@@ -1,5 +1,5 @@
 /* -*-fundamental-*- */
-/* $Id$ */
+/* $Id$ */
 
 /*
  *
@@ -23,6 +23,7 @@
  */
 
 %{
+#define YYSTYPE YYSTYPE
 #include "rpcc.h"
 #include "parse.h"
 
