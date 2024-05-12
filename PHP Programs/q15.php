<?php
$cars=array("Volvo","BMW","Toyota","Honda","Mercedes","Opel");
print_r(array_chunk($cars,2));
echo "<br>";

$a = array("red","green","blue","yellow","brown");
print_r(array_slice($a,2));
echo "<br>";

$a1=array("red","green");
$a2=array("blue","yellow");
print_r(array_merge($a1,$a2));
echo "<br>";

$fname=array("Peter","Ben","Joe");
$age=array("35","37","43");
$c=array_combine($fname,$age);
print_r($c);
echo "<br>";

$number = range(0,5);
print_r ($number);
echo "<br>";

shuffle($a);
print_r($a);
echo "<br>";

$arr = array('Hello','World!','Beautiful','Day!');
echo implode(" ",$arr);
echo "<br>";

$str = "Hello world. It's a beautiful day.";
print_r (explode(" ",$str));
echo "<br>";

print_r(array_reverse($a));
echo "<br>";

echo count($a);
?>