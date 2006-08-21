--- lib/if_spmd.c.orig	Wed Nov 16 09:34:30 2005
+++ lib/if_spmd.c	Mon Aug 21 14:49:19 2006
@@ -1,4 +1,4 @@
-/* $Id$ */
+/* $Id$ */
 /*
  * Copyright (C) 2003, 2004 WIDE Project.
  * All rights reserved.
@@ -940,7 +940,8 @@
 {
 	unsigned char md[EVP_MAX_MD_SIZE];
 	EVP_MD_CTX ctx;
-	size_t hash_len, md_len;
+	size_t hash_len;
+	unsigned int md_len;
 	int error, used, i;
 	char *p;
 
