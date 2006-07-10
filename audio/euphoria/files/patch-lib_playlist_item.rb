--- lib/playlist_item.rb.orig	Mon Jul 10 11:30:20 2006
+++ lib/playlist_item.rb	Mon Jul 10 11:31:08 2006
@@ -1,4 +1,4 @@
-# $Id$
+# $Id$
 
 class PlaylistItem
 	attr_reader :id, :edje, :position, :selected, :hilighted
@@ -23,9 +23,7 @@
 	end
 
 	def method_missing(method)
-		tmp = @props[method]
-
-		tmp || @props[:server][method] || "default"
+		@props[method] || "default"
 	end
 
 	def duration
