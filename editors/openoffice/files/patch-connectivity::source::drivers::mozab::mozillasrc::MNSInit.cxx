--- ../connectivity/source/drivers/mozab/mozillasrc/MNSInit.cxx.orig	Sat May 18 02:01:33 2002
+++ ../connectivity/source/drivers/mozab/mozillasrc/MNSInit.cxx	Sat May 18 02:02:18 2002
@@ -2,9 +2,9 @@
  *
  *	$RCSfile$
  *
- *	$Revision$
+ *	$Revision$
  *
- *	last change: $Author$ $Date$
+ *	last change: $Author$ $Date$
  *
  *	The Contents of this file are made available subject to the terms of
  *	either of the following licenses
@@ -269,7 +269,7 @@
 #ifdef _DEBUG
 				nsCAutoString temp1;
 				temp1.AssignWithConversion( pUsedProfile );
-				OSL_TRACE("Profile Name: %s\n", NS_STATIC_CAST(const char*, temp1));
+				OSL_TRACE("Profile Name: %s\n", NS_STATIC_CAST(const char*, temp1.get()));
 #endif
 				theProfile->SetCurrentProfile( pUsedProfile );
 
