--- src/local.c	29 Mar 2004 11:50:00 -0000	1.69
+++ src/local.c	14 Aug 2004 11:25:55 -0000	1.70
@@ -1,5 +1,5 @@
 /* 
- * $Id$
+ * $Id$
  *
  * Copyright (c) 2002, 2003, 2004 Jean-Yves Lefort <jylefort@brutele.be>
  *
@@ -614,6 +614,7 @@
 	case LOCAL_TYPE_OGG:	local_vc_read(stream); 		break;
 #endif
 	default:		/* nop */
+	  break;
 	}
       
       *streams = g_list_append(*streams, stream);
