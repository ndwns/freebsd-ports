--- ../connectivity/source/drivers/mozab/mozillasrc/MTypeConverter.cxx.orig	Mon Nov 26 14:52:26 2001
+++ ../connectivity/source/drivers/mozab/mozillasrc/MTypeConverter.cxx	Sat May 18 14:02:06 2002
@@ -2,9 +2,9 @@
  *
  *  $RCSfile$
  *
- *  $Revision$
+ *  $Revision$
  *
- *  last change: $Author$ $Date$
+ *  last change: $Author$ $Date$
  *
  *  The Contents of this file are made available subject to the terms of
  *  either of the following licenses
@@ -136,9 +136,11 @@
 	::rtl::OString os(ous,ous.getLength(),RTL_TEXTENCODING_ASCII_US);
 	return( ::std::string(os.getStr()));
 }
+#if 0
 // -------------------------------------------------------------------------
 ::std::string MTypeConverter::nsStringToStlString(nsString const &nss)
 {
 	return( ::std::string(nss.GetBuffer()));
 }
+#endif
 // -------------------------------------------------------------------------
