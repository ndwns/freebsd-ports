--- src/snort.c.orig	Fri Mar 14 19:58:33 2003
+++ src/snort.c	Fri Mar 14 19:58:19 2003
@@ -1,4 +1,4 @@
-/* $Id$ */
+/* $Id$ */
 /*
 ** Copyright (C) 1998-2002 Martin Roesch <roesch@sourcefire.com>
 **
@@ -252,6 +252,8 @@
         OpenPcap(pv.readfile, 0);
     }
 
+    InitOutputPlugins();
+    
     /* didn't get any conf data at the command line, try to find the default
      * conf file
      */ 
@@ -310,9 +312,6 @@
         GoDaemon();
     }
 
-    /* initialize these here so we do not print unwanted messages */
-    InitOutputPlugins();
-    
     /*
      * creating a PID file before setting its proper
      * path (in SanityChecks()) is not a good idea
@@ -2212,7 +2211,7 @@
     struct stat st;
     int found;
     int i;
-    char *conf_files[]={"/etc/snort.conf", "./snort.conf", NULL};
+    char *conf_files[]={"/usr/local/etc/snort.conf", "./snort.conf", NULL};
     char *fname = NULL;
     char *home_dir;
     char *tmp;
