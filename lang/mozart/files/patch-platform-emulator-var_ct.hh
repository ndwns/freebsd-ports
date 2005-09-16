--- ./platform/emulator/var_ct.hh.orig	Thu Dec 18 10:12:41 2003
+++ ./platform/emulator/var_ct.hh	Sat Sep  3 18:46:09 2005
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
@@ -38,7 +38,7 @@
   friend class OzVariable;
   friend void constrainGlobalVar(OZ_Term *, OZ_Ct *);
   friend OZ_Return tellBasicConstraint(OZ_Term, OZ_Ct *, OZ_CtDefinition *);
-  friend OZ_Boolean OZ_CtVar::tell(void);
+  friend class OZ_CtVar;
   friend void addSuspCtVar(OZ_Term , Suspendable * , OZ_CtWakeUp);
 
 private:
