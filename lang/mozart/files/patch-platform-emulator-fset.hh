--- ./platform/emulator/fset.hh.orig	Sat Jan  6 13:29:09 2001
+++ ./platform/emulator/fset.hh	Sat Sep  3 18:46:09 2005
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
@@ -37,6 +37,7 @@
 
 //-----------------------------------------------------------------------------
 
+class FSetConstraint;
 class FSetValue : public OZ_FSetValue {
 
 friend class FSetConstraint;
