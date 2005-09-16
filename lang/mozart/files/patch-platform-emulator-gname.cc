--- ./platform/emulator/gname.cc.orig	Fri Aug  2 16:20:44 2002
+++ ./platform/emulator/gname.cc	Sat Sep  3 18:46:09 2005
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
@@ -33,8 +33,8 @@
 #include "board.hh"
 
 //
-template class GenDistEntryTable<GName>;
 #include "hashtblDefs.cc"
+template class GenDistEntryTable<GName>;
 
 //
 GNameTable gnameTable;
