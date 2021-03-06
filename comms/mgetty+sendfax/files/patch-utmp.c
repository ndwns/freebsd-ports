
$FreeBSD$

--- utmp.c.orig
+++ utmp.c
@@ -1,4 +1,4 @@
-#ident "$Id$ Copyright (c) Gert Doering"
+static char sccsid[] = "$Id$ Copyright (c) Gert Doering";
 
 /* some parts of the code (writing of the utmp entry)
  * is based on the "getty kit 2.0" by Paul Sutcliffe, Jr.,
@@ -58,7 +58,7 @@
      * [NB: If we wanted to set UT_INIT, it would have to be an entry with
      * empty ut_name and ut_host]
      */
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if (defined(__FreeBSD__) && (__FreeBSD_version < 900007)) || defined(__NetBSD__)
     struct utmp utmp;
     extern void login _PROTO(( struct utmp * utmp ));
 
