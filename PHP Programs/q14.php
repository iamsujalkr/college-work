<?php
$arr = [100,40,8,9,10,88,1];
$arr1 = array(
    "name"=>"Sujal",
    "Course"=>"BCA",
    "Sem"=>2
);
print_r($arr);
echo '<br>';
print_r($arr1);
echo '<br>';

echo "<br>sort() - ";
sort($arr);
print_r($arr);
echo "<br>rsort() - ";
rsort($arr);
print_r($arr);
echo "<br>asort() - ";
asort($arr1);
print_r($arr1);
echo "<br>ksort() - ";
ksort($arr1);
print_r($arr1);
echo "<br>arsort() - ";
arsort($arr1);
print_r($arr1);
echo "<br>krsort() - ";
krsort($arr1);
print_r($arr1);

?>