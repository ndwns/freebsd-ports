--- ./platform/emulator/mem.hh.orig	Tue May  6 04:56:47 2003
+++ ./platform/emulator/mem.hh	Sat Sep  3 18:46:09 2005
@@ -11,8 +11,8 @@
  *    Organization or Person (Year(s))
  * 
  *  Last change:
- *    $Date$ by $Author$
- *    $Revision$
+ *    $Date$ by $Author$
+ *    $Revision$
  * 
  *  This file is part of Mozart, an implementation 
  *  of Oz 3:
@@ -125,8 +125,7 @@
    *
    */
 
- retry:
-  {
+  while(TRUE) {
     Assert(oz_isHeapAligned(_oz_heap_cur));
     size_t a_sz = oz_alignSize(sz);
 
@@ -142,7 +141,7 @@
     /* _oz_heap_cur might be negative!! */
     if (((unsigned long) _oz_heap_end) > ((unsigned long) _oz_heap_cur)) {
       _oz_getNewHeapChunk(a_sz);
-      goto retry;
+      continue;
     }
 
     return (void*) _oz_heap_cur;
