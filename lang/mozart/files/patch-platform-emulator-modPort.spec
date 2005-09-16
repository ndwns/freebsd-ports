--- ./platform/emulator/modPort.spec.orig	Wed Aug 21 06:18:19 2002
+++ ./platform/emulator/modPort.spec	Sat Sep  3 18:46:09 2005
@@ -8,8 +8,8 @@
 ###   Christian Schulte, 1998
 ###
 ### Last change:
-###   $Date$ by $Author$
-###   $Revision$
+###   $Date$ by $Author$
+###   $Revision$
 ###
 ### This file is part of Mozart, an implementation 
 ### of Oz 3:
@@ -30,8 +30,8 @@
 		     out => ['+bool'],
 		     bi  => BIisPort},
 
-     'new'	=> { in  => ['list'],
-		     out => ['+port'],
+     'new'	=> { in  => [],
+		     out => ['list','+port'],
 		     BI  => BInewPort},
 
      'send'	=> { in  => ['+port','value'],
