<?php
$myfile = fopen("test.txt", "w");
$content = "Hello World, This is written to file";
fwrite($myfile, $content);
fclose($myfile);

$myfile = fopen("test.txt", "r");
echo fread($myfile, filesize("test.txt"));
fclose($myfile);

?>