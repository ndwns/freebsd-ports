--- a/i18n.c
+++ b/i18n.c
@@ -6,9 +6,10 @@
  * $Id$
  */
 
-#include "i18n.h"
+#include <vdr/config.h>
 
 #if VDRVERSNUM < 10507
+#include "i18n.h"
 
 const tI18nPhrase Phrases[] = {
   { "Not active",// English
