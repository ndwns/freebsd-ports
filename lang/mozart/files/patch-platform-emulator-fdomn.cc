--- ./platform/emulator/fdomn.cc.orig	Sat Nov 23 17:04:46 2002
+++ ./platform/emulator/fdomn.cc	Sat Sep  3 18:46:09 2005
@@ -9,8 +9,8 @@
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
@@ -191,12 +191,12 @@
 
 inline
 int FDIntervals::findMinElem(void) {
-  return high ? i_arr[0].left : 0;
+  return high ? i_arr[0].left : -1;
 }
 
 inline
 int FDIntervals::findMaxElem(void) {
-  return high ? i_arr[high - 1].right : 0;
+  return high ? i_arr[high - 1].right : -1;
 }
 
 inline
