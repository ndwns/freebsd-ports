--- ./platform/emulator/libfd/fdaux.cc.orig	Thu Oct 17 09:01:44 2002
+++ ./platform/emulator/libfd/fdaux.cc	Sat Sep  3 18:46:08 2005
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
@@ -28,8 +28,8 @@
 
 #include "fdaux.hh"
 
-template _OZ_ParamIterator<OZ_Return>;
-template PropagatorController_V_V;
+template class _OZ_ParamIterator<OZ_Return>;
+template class _PropagatorController_V_V<OZ_Return,OZ_FDIntVar,PROCEED,FAILED,SLEEP>;
 
 //-----------------------------------------------------------------------------
 // convert vector to C++ arrays
