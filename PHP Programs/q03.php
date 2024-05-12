<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter length : <input type="text" name="num1">
        </label></p>
        <p><label>
            Enter breadth : <input type="text" name="num2">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $num2 = $_POST['num2'];
            $peri = 2*($num1 + $num2);
            $area = $num1 * $num2;
            echo "<br>Perimeter is : $peri";
            echo "<br>Area is : $area";
        }
    ?>
</body>
</html>