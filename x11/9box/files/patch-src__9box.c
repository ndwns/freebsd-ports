--- src/9box.c.orig	2002-12-05 07:13:33.000000000 +0800
+++ src/9box.c	2011-09-08 14:37:25.000000000 +0800
@@ -20,6 +20,7 @@
 /* $Id$ */
 
 #include <stdio.h>
+#include <stdlib.h>
 #include <X11/Xlib.h>
 #include <X11/X.h>
 #include <X11/cursorfont.h>
@@ -186,8 +187,8 @@ main (int argc, char ** argv)
 		      Window root_return;
 		      int x_return, y_return, width_return, height_return, border_width_return, depth_return;
 		      XGetGeometry(box.dpy, box.win, &root_return, &x_return,
-				   &y_return, &width_return, &height_return,
-				   &border_width_return, &depth_return);
+				   &y_return, (unsigned int *)&width_return, (unsigned int *)&height_return,
+				   (unsigned int *)&border_width_return, (unsigned int *)&depth_return);
 		      XMoveWindow(box.dpy,
 				  box.boxed_windows[i]->button, i*BUTTON_DEFAULT_WIDTH, height_return-20);
 		      XResizeWindow(box.dpy, box.boxed_windows[i]->client, 
@@ -435,7 +436,7 @@ XButtonEvent *e;
 
 
 
-Window
+void
 reparent_window(Box * box)
 {
   Window win, win2;
