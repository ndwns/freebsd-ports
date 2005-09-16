--- ./platform/emulator/libdp/comObj.cc.orig	Mon Apr 28 08:32:28 2003
+++ ./platform/emulator/libdp/comObj.cc	Sat Sep  3 18:46:09 2005
@@ -7,8 +7,8 @@
  *  Copyright:
  * 
  *  Last change:
- *    $Date$ by $Author$
- *    $Revision$
+ *    $Date$ by $Author$
+ *    $Revision$
  * 
  *  This file is part of Mozart, an implementation 
  *  of Oz 3:
@@ -376,8 +376,15 @@
   localRef=FALSE;
   if(hasNeed()) 
     return FALSE;
-  else if(remoteRef)
+  else if(remoteRef) {
+    if(!sentclearref && (state == WORKING)) {
+      MsgContainer *msgC=msgContainerManager->newMsgContainer(NULL);
+      msgC->put_C_CLEAR_REFERENCE();
+      send(msgC);
+      sentclearref=TRUE;
+    }
     return FALSE;
+  }
   else {
     switch(state) {
     case WORKING: {
