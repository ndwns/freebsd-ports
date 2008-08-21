--- libsee/parse.c.orig	Sun Feb 10 05:59:48 2008
+++ libsee/parse.c	Thu Aug 21 13:07:30 2008
@@ -27,7 +27,7 @@
  * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  * POSSIBILITY OF SUCH DAMAGE.
  */
-/* $Id$ */
+/* $Id$ */
 
 /*
  * Combined parser and evaluator.
@@ -12317,6 +12317,7 @@
 		&SourceElements_nodeclass); 
 	ss->statements = s;
 	ss->functions = NULL;
+	ss->vars = NULL;
 	return (struct node *)ss;
 }
