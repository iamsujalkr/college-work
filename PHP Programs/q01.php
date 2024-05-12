<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter number 1 : <input type="text" name="num1">
        </label></p>
        <p><label>
            Enter number 2 : <input type="text" name="num2">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $num2 = $_POST['num2'];
            $sum = $num1 + $num2;
            echo "<br>Sum is : $sum";
        }
    ?>
</body>
</html>