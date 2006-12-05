--- pty.lua.orig	Wed Nov 29 22:38:08 2006
+++ pty.lua	Wed Nov 29 22:39:00 2006
@@ -1,9 +1,8 @@
 -- $Id$
 -- Lua wrapper functions for Lua 5.0.x Pty (pseudo-terminal) binding.
 
+local Pty = require("lpty")
 module("pty")
-
-Pty = require("lpty")
 
 --[[------------]]--
 --[[ Pty.Logged ]]--
