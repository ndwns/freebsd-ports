--- /usr/ports/devel/cocktail/work/cocktail-9309//./reuse/c/ErrorsDrv.c	Tue Feb 15 14:26:35 1994
+++ ./reuse/c/ErrorsDrv.c	Fri Sep 10 13:35:02 2004
@@ -8,7 +8,8 @@
 
 /* Ich, Doktor Josef Grosch, Informatiker, Aug. 1992 */
 
-static char rcsid [] = "$Id$";
+# include <sys/cdefs.h>
+__RCSID("$Id$");
 
 # include "ratc.h"
 # include <stdio.h>
