--- ext/standard/dir.c.orig	Mon Oct 16 06:59:56 2006
+++ ext/standard/dir.c	Mon Oct 16 07:00:06 2006
@@ -16,7 +16,7 @@
    +----------------------------------------------------------------------+
  */
 
-/* $Id$ */
+/* $Id$ */
 
 /* {{{ includes/startup/misc */
 
@@ -275,7 +275,7 @@
 		RETURN_FALSE;
 	}
 
-	if (PG(safe_mode) && !php_checkuid(str, NULL, CHECKUID_CHECK_FILE_AND_DIR)) {
+	if ((PG(safe_mode) && !php_checkuid(str, NULL, CHECKUID_CHECK_FILE_AND_DIR)) || php_check_open_basedir(str TSRMLS_CC)) {
 		RETURN_FALSE;
 	}
 	ret = VCWD_CHDIR(str);
