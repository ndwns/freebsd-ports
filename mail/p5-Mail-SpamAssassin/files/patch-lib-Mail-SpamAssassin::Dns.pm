--- lib/Mail/SpamAssassin/Dns.pm.bak	Wed Jan  9 00:18:48 2002
+++ lib/Mail/SpamAssassin/Dns.pm	Mon Mar  4 19:49:15 2002
@@ -176,7 +176,6 @@
     require Razor::Client;
     require Razor::Agent;
     local ($^W) = 0;		# argh, warnings in Razor
-    local ($/);			# argh, bugs in Razor
 
     local $SIG{ALRM} = sub { die "alarm\n" };
     alarm 10;
