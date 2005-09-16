--- ./share/lib/cp/FD.oz.orig	Wed Apr 30 17:51:32 2003
+++ ./share/lib/cp/FD.oz	Sat Sep  3 18:46:09 2005
@@ -10,8 +10,8 @@
 %%%   Christian Schulte, 1997, 1998
 %%%
 %%% Last change:
-%%%   $Date$ by $Author$
-%%%   $Revision$
+%%%   $Date$ by $Author$
+%%%   $Revision$
 %%%
 %%% This file is part of Mozart, an implementation
 %%% of Oz 3
@@ -319,7 +319,19 @@
 	 
       GenSumR   = FdpSumR
       GenSumCR  = FdpSumCR
-      GenSumCNR = FdpSumCNR
+
+      %% was: GenSumCNR = FdpSumCNR, but the latter blocks until the
+      %% polynom becomes linear (bug fix)
+      proc {GenSumCNR IV DDV Rel D B}
+	 NegRel = NegRelTable.Rel
+      in
+	 {FdBool B}
+	 thread
+	    or B=1 {FdpSumCN IV DDV Rel    D}
+	    [] B=0 {FdpSumCN IV DDV NegRel D}
+	    end
+	 end
+      end
 	 
       local
 	 proc {MapIntR N T TR Dom}
@@ -395,9 +407,7 @@
 			  dom:        FdDomR
 			  sum:        GenSumR
 			  sumC:       GenSumCR
-			  sumCN:      proc {$ A B C D E}
-					 thread {GenSumCNR A B C D E} end
-				      end
+			  sumCN:      GenSumCNR
 			  sumAC:      GenSumACR
 			  sumACN:     GenSumACNR
 			  distance:   DistanceR
