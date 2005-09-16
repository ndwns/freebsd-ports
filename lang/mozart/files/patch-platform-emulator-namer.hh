--- ./platform/emulator/namer.hh.orig	Wed Jun  2 18:46:32 1999
+++ ./platform/emulator/namer.hh	Sat Sep  3 18:46:09 2005
@@ -8,8 +8,8 @@
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
@@ -123,7 +123,6 @@
 public:
   Namer(void) { 
     GCMeManager::registerObject(this);
-    _head = NULL; 
   }
   static Namer<T_INDEX, T_NAME> * getHead(void) { return _head; }
   static T_NAME getName(T_INDEX index) {
