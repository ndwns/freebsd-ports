--- /usr/ports/devel/cocktail/work/cocktail-9309//./reuse/c/Source.c	Tue Feb 15 14:26:39 1994
+++ ./reuse/c/Source.c	Fri Sep 10 13:35:03 2004
@@ -11,7 +11,8 @@
 
 /* Ich, Doktor Josef Grosch, Informatiker, Juli 1992 */
 
-static char rcsid [] = "$Id$";
+# include <sys/cdefs.h>
+__RCSID("$Id$");
 
 # include "Source.h"
 
