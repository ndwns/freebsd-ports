--- ../stoc/source/servicemanager/servicemanager.cxx	Wed Mar 12 17:57:10 2003
+++ ../stoc/source/servicemanager/servicemanager.cxx	Wed Mar 12 18:51:36 2003
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
@@ -686,6 +686,7 @@
 
 protected:
     inline void check_undisposed() const SAL_THROW( (lang::DisposedException) );
+    virtual void SAL_CALL disposing();
     
 	sal_Bool haveFactoryWithThisImplementation(const OUString& aImplName);
 
@@ -1081,7 +1082,10 @@
     if (rBHelper.bDisposed || rBHelper.bInDispose)
         return;
 	t_OServiceManager_impl::dispose();
-    
+}
+
+void OServiceManager::disposing()
+{
 	// dispose all factories
 	HashSet_Ref aImpls;
 	{
