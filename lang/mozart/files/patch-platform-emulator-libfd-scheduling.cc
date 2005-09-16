--- ./platform/emulator/libfd/scheduling.cc.orig	Thu Oct 17 09:01:44 2002
+++ ./platform/emulator/libfd/scheduling.cc	Sat Sep  3 18:46:08 2005
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
@@ -32,7 +32,7 @@
 
 //-----------------------------------------------------------------------------
 #if !defined(MODULES_LINK_STATIC)
-template PropagatorController_V_V;
+template class _PropagatorController_V_V<OZ_Return,OZ_FDIntVar,PROCEED,FAILED,SLEEP>;
 #endif
 
 static inline int intMin(int a, int b) { return a < b ? a : b; }
