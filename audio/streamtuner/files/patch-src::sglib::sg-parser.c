--- src/sglib/sg-parser.c	11 May 2004 15:40:41 -0000	1.15.2.2
+++ src/sglib/sg-parser.c	12 May 2004 14:17:28 -0000	1.15.2.3
@@ -1,5 +1,5 @@
 /*
- * $Id$
+ * $Id$
  *
  * Copyright (c) 2002, 2003, 2004 Jean-Yves Lefort
  * All rights reserved.
@@ -288,6 +288,7 @@
 	  break;
 	  
 	default:			/* only to suppress compiler warnings */
+	  break;
 	}
       
       if (statement->terminator)
