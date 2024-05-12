<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter radius : <input type="text" name="num1">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $circum = 2 * 22/7 * $num1;
            $area = 22/7 * ($num1**2);
            echo "<br>Circumference is : $circum";
            echo "<br>Area is : $area";
        }
    ?>
</body>
</html>