
$FreeBSD$

--- ltmain.sh	2001/08/20 07:26:57	1.1
+++ ltmain.sh	2001/08/20 07:27:31
@@ -4673,10 +4673,12 @@
 	fi
 
 	# Install the pseudo-library for information purposes.
+	if false; then
 	name=`$echo "X$file" | $Xsed -e 's%^.*/%%'`
 	instname="$dir/$name"i
 	$show "$install_prog $instname $destdir/$name"
 	$run eval "$install_prog $instname $destdir/$name" || exit $?
+	fi
 
 	# Maybe install the static library, too.
 	test -n "$old_library" && staticlibs="$staticlibs $dir/$old_library"
