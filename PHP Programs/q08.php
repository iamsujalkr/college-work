<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter the number for table : <input type="text" name="num1">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            for($i = 1; $i <= 10; $i++){
                echo "<br>$num1 * $i = ".$num1*$i;
            }
        }
    ?>
</body>
</html>