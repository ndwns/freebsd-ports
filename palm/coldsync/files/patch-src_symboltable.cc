--- src/symboltable.cc.orig	Tue Nov 13 16:48:07 2001
+++ src/symboltable.cc	Tue May 11 11:19:40 2004
@@ -7,11 +7,15 @@
  * $Id$
  */
 
+#include <stdio.h>
+#include <wchar.h>
 #include "config.h"
 #include <string>
 #include <map>
 #include <cstdlib>		// For malloc() and friends
 #include "symboltable.h"
+
+using namespace std;
 
 static char *make_c_string(const string &s);
 
