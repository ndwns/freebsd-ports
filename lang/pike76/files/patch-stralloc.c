--- src/stralloc.c.old	Fri Nov 18 11:06:05 2005
+++ src/stralloc.c	Fri Nov 18 11:06:10 2005
@@ -2,7 +2,7 @@
 || This file is part of Pike. For copyright information see COPYRIGHT.
 || Pike is distributed under GPL, LGPL and MPL. See the file COPYING
 || for more information.
-|| $Id$
+|| $Id$
 */
 
 #include "global.h"
@@ -24,7 +24,7 @@
 #include <ctype.h>
 #include <math.h>
 
-RCSID("$Id$");
+RCSID("$Id$");
 
 /* #define STRALLOC_USE_PRIMES */
 
@@ -1596,6 +1596,7 @@
 	add_ref(a = old);
       } else {
 	link_pike_string(a, a->hval);
+	add_ref(a);
       }
       return a;
     }else{
