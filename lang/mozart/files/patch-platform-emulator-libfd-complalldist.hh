--- ./platform/emulator/libfd/complalldist.hh.orig	Fri May 16 06:18:42 2003
+++ ./platform/emulator/libfd/complalldist.hh	Sat Sep  3 18:46:08 2005
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
@@ -213,7 +213,7 @@
 #endif
   }
 
-  list<T> (list<T> &E) :generic() {
+  list<T> (const list<T> &E) :generic() {
     dlink<T> *p = E.root;
     dlink<T> *q = NULL;
     dlink<T> *r = NULL;
@@ -873,7 +873,7 @@
 
 /* ------------------------------------------------------------------------ */
 
-inline list<edge> graph::MAX_CARD_BIPARTITE_MATCHING(const list<node>& A, 
+  inline list<edge> graph::MAX_CARD_BIPARTITE_MATCHING(const list<node>& A, 
 					      const list<node>& B ) {
 
   // G is a bipartite graph with sides A and B, all edges must be directed 
