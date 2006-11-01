--- data/py/command.py	Tue Oct 17 22:10:04 2006
+++ data/py/command.py	Tue Oct 17 22:10:28 2006
@@ -26,6 +26,8 @@
 # $Source$
 __date__ = "$Date$"
 
+import gtk
+
 from threading import Thread
 from gtk import threads_enter, threads_leave
 from os import popen
@@ -37,9 +39,9 @@
         self.output = ""
 
     def run(self):
-        threads_enter()
+        gtk.gdk.threads_enter()
         pipe = popen(self.command,"r")
-        threads_leave()
+        gtk.gdk.threads_leave()
         self.output = pipe.read()
 
     def get_output(self):
