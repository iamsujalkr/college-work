<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<form method = 'post'>   
    <h2>Simple Calculator</h2>
    <p><label>
    First Number:<input name="n1" value="">
    </p></label>
    <p><label>
    Second Number:<input name="n2" value="">
    </label></p>
    <input type="submit" name="sub" value="+">
    <input type="submit" name="sub" value="-">
    <input type="submit" name="sub" value="*">
    <input type="submit" name="sub" value="/"><br>
</form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['n1'];
            $num2 = $_POST['n2'];
            $opr = $_POST['sub'];
            if($opr == '+'){
                echo "Result : ".$num1+$num2;
            }
            elseif($opr == '-'){
                echo "Result : ".$num1-$num2;
            }
            elseif($opr == '*'){
                echo "Result : ".$num1*$num2;
            }
            else{
                echo "Result : ".$num1/$num2;
            }
        }
    ?>
</body>
</html>