--- gweather/weather-iwin.c.orig	Tue Dec 21 18:42:38 2004
+++ gweather/weather-iwin.c	Tue Dec 21 18:42:47 2004
@@ -1,5 +1,6 @@
 /* $Id$ */
 
+#include <sys/types.h>
 #include <regex.h>
 #include <gnome.h>
 #include "weather.h"
