<?php
class myclass{
   function __construct(){
      echo "object is initialized
";
   }
   function __destruct(){
      echo "object is destroyed
";
   }
}
$obj=new myclass();
?>