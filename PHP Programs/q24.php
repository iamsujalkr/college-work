<?php
session_start();
$_SESSION['name'] = 'admin';
echo $_SESSION['name'];
session_unset();
session_destroy();

?>