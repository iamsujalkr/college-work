<?php
function swap1($a, $b){
    $c = $a;
    $a = $b;
    $b = $c;
}
function swap2(&$a, &$b){
    $c = $a;
    $a = $b;
    $b = $c;
}

$a = 5;
$b = 3;
echo '$a = '.$a.'   $b = '.$b;
swap1($a, $b);
echo "<br>After Swap1()";
echo '<br>$a = '.$a.'   $b = '.$b;
swap2($a, $b);
echo "<br>After Swap2()";
echo '<br>$a = '.$a.'   $b = '.$b;
?>