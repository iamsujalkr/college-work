<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter Basic Salary : <input type="text" name="num1">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $da = 0.4 * $num1;
            $hra = 0.2 * $num1;
            $gs = $num1 + $da + $hra;
            echo "<br>Gross Salary is : $gs";
        }
    ?>
</body>
</html>