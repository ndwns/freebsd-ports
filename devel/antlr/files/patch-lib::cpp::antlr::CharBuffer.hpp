$FreeBSD$

--- lib/cpp/antlr/CharBuffer.hpp.orig	Mon Nov 15 16:35:21 2004
+++ lib/cpp/antlr/CharBuffer.hpp	Mon Nov 15 16:36:04 2004
@@ -8,7 +8,11 @@
  * $Id$
  */
 
+#if defined(__GNUC__) && (__GNUC__ < 3 || __GNUC_MINOR__ < 2)
+#include <istream.h>
+#else
 #include <istream>
+#endif
 
 #include <antlr/config.hpp>
 #include <antlr/InputBuffer.hpp>
