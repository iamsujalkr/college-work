<?php
setcookie('Category', 'Books', time()+1*60*60);
echo $_COOKIE['Category'];

/* for deleting cookie
setcookie('Category', 'Books', time()-60*60);
*/
?>