
$FreeBSD$

--- lisp/sawfish/wm/state/gnome.jl.orig	Fri May  4 10:41:32 2001
+++ lisp/sawfish/wm/state/gnome.jl	Tue Aug 28 19:42:30 2001
@@ -1,5 +1,5 @@
 ;; gnome.jl -- minimal GNOME compliance
-;; $Id$
+;; $Id$
 
 ;; Copyright (C) 1999 John Harper <john@dcs.warwick.ac.uk>
 
@@ -321,7 +321,7 @@
       (let ((event (event-name (current-event))))
 	;; only proxy Click1 or Off events, and only if we don't have
 	;; a binding for an event that may follow in the same grab
-	(cond ((and (string-match "^(.*)-Click1$" event)
+	(cond ((and (string-match "^(.*)-Click\\d?$" event)
 		    (let ((mirror (lookup-event
 				   (expand-last-match "\\1-Off"))))
 		      (not (or (search-keymap mirror global-keymap)
