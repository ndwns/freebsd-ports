--- /usr/ports/devel/cocktail/work/cocktail-9309//./reuse/c/rMemoryDrv.c	Tue Feb 15 14:26:42 1994
+++ ./reuse/c/rMemoryDrv.c	Fri Sep 10 13:35:03 2004
@@ -29,7 +29,8 @@
 
 /* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */
 
-static char rcsid [] = "$Id$";
+# include <sys/cdefs.h>
+__RCSID("$Id$");
 
 # include "ratc.h"
 # include "rMemory.h"
