--- ./platform/emulator/libfd/card.cc.orig	Mon Apr 28 08:32:28 2003
+++ ./platform/emulator/libfd/card.cc	Sat Sep  3 18:46:08 2005
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
@@ -151,6 +151,8 @@
   sum_ops op = getSumOps(OZ_in(2));
 
   // wait for linearity
+  // raph: This is a fix for a bug in the propagator, which is
+  // apparently not correct in the non-linear case.
   OZ_EXPECT(pe, 1, expectVectorLinearVector);
 
   if (op == sum_ops_neq) {
