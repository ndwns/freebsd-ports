--- filename.lua	Mon Apr 17 10:52:51 2006
+++ filename.lua	Wed Nov 29 15:16:47 2006
@@ -1,8 +1,8 @@
 -- $Id$
 
-module("filename")
-
 local POSIX = require("posix")
+local string = require("string")
+module("filename")
 
 --[[----------]]--
 --[[ FileName ]]--
