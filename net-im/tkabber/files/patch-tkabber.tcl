--- tkabber.tcl.orig    Tue Oct 31 13:04:08 2006
+++ tkabber.tcl Tue Oct 31 13:06:18 2006
@@ -1,6 +1,6 @@
 #!/bin/sh
 # the next line restarts using the correct interpreter \
-exec wish "$0" -name tkabber "$@"
+exec wish8.4 "$0" -name tkabber "$@"
 
 # $Id$
 
@@ -107,7 +107,7 @@
     hook::run quit_hook
     catch { bind $::ifacetk::mf <Destroy> {} }
     destroy .
-    exit $status
+    quit $status
 }
 
 namespace eval ifacetk {}
