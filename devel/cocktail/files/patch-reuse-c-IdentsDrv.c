--- /usr/ports/devel/cocktail/work/cocktail-9309//./reuse/c/IdentsDrv.c	Tue Feb 15 14:26:37 1994
+++ ./reuse/c/IdentsDrv.c	Fri Sep 10 13:35:03 2004
@@ -1,4 +1,5 @@
-static char rcsid [] = "$Id$";
+# include <sys/cdefs.h>
+__RCSID("$Id$");
 
 # include <stdio.h>
 # include "Idents.h"
