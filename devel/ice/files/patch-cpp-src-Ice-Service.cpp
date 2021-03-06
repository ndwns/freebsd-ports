--- cpp.orig/src/Ice/Service.cpp	2011-06-15 21:43:59.000000000 +0200
+++ cpp/src/Ice/Service.cpp	2012-03-04 20:14:53.000000000 +0100
@@ -2136,17 +2136,26 @@
             //
             // Associate stdin, stdout and stderr with /dev/null.
             //
+#ifndef NDEBUG
             int fd;
-            fd = open("/dev/null", O_RDWR);
+            fd = 
+#endif
+            open("/dev/null", O_RDWR);
             assert(fd == 0);
             if(stdOut.empty())
             {
-                fd = dup2(0, 1);
+#ifndef NDEBUG
+                fd = 
+#endif
+                dup2(0, 1);
                 assert(fd == 1);
             }
             if(stdErr.empty())
             {
-                fd = dup2(1, 2);
+#ifndef NDEBUG
+                fd = 
+#endif
+                dup2(1, 2);
                 assert(fd == 2);
             }
         }
