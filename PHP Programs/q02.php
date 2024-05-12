<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter sub 1 marks : <input type="text" name="num1">
        </label></p>
        <p><label>
            Enter sub 2 marks : <input type="text" name="num2">
        </label></p>
        <p><label>
            Enter sub 3 marks : <input type="text" name="num3">
        </label></p>
        <p><label>
            Enter sub 4 marks : <input type="text" name="num4">
        </label></p>
        <p><label>
            Enter sub 5 marks : <input type="text" name="num5">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $num2 = $_POST['num2'];
            $num3 = $_POST['num3'];
            $num4 = $_POST['num4'];
            $num5 = $_POST['num5'];
            $sum = $num1 + $num2 + $num3 + $num4 + $num5;
            $per = ($sum / 500) * 100;
            echo "<br>Sum is : $sum";
            echo "<br>Percentage is : $per";
        }
    ?>
</body>
</html>