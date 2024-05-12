<?php
function fact($n){
    if($n == 1){
        return 1;
    }
    return $n * fact($n-1);
}
echo "Factorial of 5 :".fact(5);
?>