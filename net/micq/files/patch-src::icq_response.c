
$FreeBSD$

--- src/icq_response.c.orig	Thu Mar 28 01:12:10 2002
+++ src/icq_response.c	Fri Apr  5 13:02:01 2002
@@ -1,4 +1,4 @@
-/* $Id$ */
+/* $Id$ */
 /* Copyright ? */
 
 #include "micq.h"
@@ -465,14 +465,14 @@
     {
         strcpy (buf, new);
         strcat (buf, " ");
-                       sprintf (buf + strlen (buf), "%d.%d", ver / 10000,
+                       snprintf (buf + strlen (buf), sizeof(buf) - strlen (buf), "%d.%d", ver / 10000,
                                                             (ver / 100) % 100);
-        if (ver % 100) sprintf (buf + strlen (buf), ".%d",  (ver / 10)  %  10);
-        if (ver % 10)  sprintf (buf + strlen (buf), " cvs %d",   ver        %  10);
+        if (ver % 100) snprintf (buf + strlen (buf), sizeof(buf) - strlen (buf), ".%d",  (ver / 10)  %  10);
+        if (ver % 10)  snprintf (buf + strlen (buf), sizeof(buf) - strlen (buf), " cvs %d",   ver        %  10);
         if (ssl) strcat (buf, "/SSL");
     }
     else if (prG->verbose)
-        sprintf (buf, "%s %08x", i18n (827, "Unknown client"), (unsigned int)tstamp);
+        snprintf (buf, sizeof(buf), "%s %08x", i18n (827, "Unknown client"), (unsigned int)tstamp);
     else
         buf[0] = '\0';
 
