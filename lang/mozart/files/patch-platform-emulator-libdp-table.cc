--- ./platform/emulator/libdp/table.cc.orig	Mon Apr 28 08:32:28 2003
+++ ./platform/emulator/libdp/table.cc	Sat Sep  3 18:46:09 2005
@@ -9,8 +9,8 @@
  *    Per Brand, 1998
  * 
  *  Last change:
- *    $Date$ by $Author$
- *    $Revision$
+ *    $Date$ by $Author$
+ *    $Revision$
  * 
  *  This file is part of Mozart, an implementation 
  *  of Oz 3:
@@ -45,8 +45,8 @@
 ((po)->isTertiary() ? makeTaggedConst((po)->getTertiary()) : (po)->getRef())
 
 //
-template class GenDistEntryTable<BorrowEntry>;
 #include "hashtblDefs.cc"
+template class GenDistEntryTable<BorrowEntry>;
 
 
 OwnerTable *ownerTable;
