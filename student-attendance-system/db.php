<?php
$db = new mysqli('localhost','root','', "attendance");
if (!$db)
{
   	die("Connection failed: " . mysqli_connect_error());
}
?>