--- src/game.cpp.orig	Mon Feb  7 20:32:47 2005
+++ src/game.cpp	Mon Feb  7 20:32:56 2005
@@ -1,4 +1,4 @@
-/* $Id$ */
+/* $Id$ */
 /*
    Copyright (C) 2003 by David White <davidnwhite@optusnet.com.au>
    Part of the Battle for Wesnoth Project http://wesnoth.whitevine.net
@@ -1514,7 +1514,8 @@
 	// initialized to have get_intl_dir() to work.  Note: this
 	// setlocale() but this does not take GUI language setting
 	// into account.
-	setlocale (LC_ALL, "");
+	setlocale(LC_ALL, "C");
+	setlocale(LC_MESSAGES, "");
 	const std::string& intl_dir = get_intl_dir();
 	bindtextdomain (PACKAGE, intl_dir.c_str());
 	bind_textdomain_codeset (PACKAGE, "UTF-8");
