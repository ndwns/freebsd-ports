--- ./platform/emulator/libfset/fsaux.cc.orig	Wed Sep  3 09:10:39 2003
+++ ./platform/emulator/libfset/fsaux.cc	Sat Sep  3 18:46:08 2005
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
@@ -28,7 +28,7 @@
 
 #include "fsaux.hh"
 
-template _OZ_ParamIterator<OZ_Return>;
+template class _OZ_ParamIterator<OZ_Return>;
 extern FILE *cpi_fileout;
 
 void oz_fsetdebugprint(char *format, ...)
