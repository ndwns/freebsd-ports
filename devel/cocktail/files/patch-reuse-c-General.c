--- /usr/ports/devel/cocktail/work/cocktail-9309//./reuse/c/General.c	Tue Feb 15 14:26:35 1994
+++ ./reuse/c/General.c	Fri Sep 10 13:35:02 2004
@@ -26,7 +26,8 @@
 
 /* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */
 
-static char rcsid [] = "$Id$";
+# include <sys/cdefs.h>
+__RCSID("$Id$");
 
 # include "ratc.h"
 # include "General.h"
@@ -66,7 +67,7 @@
    }
 
 static struct { char yychar; double yydouble; } yyForAlign;
-short	yyMaxAlign	= sizeof (yyForAlign) - sizeof (double);
+unsigned long	yyMaxAlign	= sizeof (yyForAlign) - sizeof (double);
 long	yyAlignMasks []	= { 0,
    0xffffffff, 0xfffffffe, 0xffffffff, 0xfffffffc,
    0xffffffff, 0xffffffff, 0xffffffff, 0xfffffff8,
