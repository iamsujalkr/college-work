<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter Principle Amount : <input type="text" name="num1">
        </label></p>
        <p><label>
            Enter Time : <input type="text" name="num2">
        </label></p>
        <p><label>
            Enter interest : <input type="text" name="num3">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $num2 = $_POST['num2'];
            $num3 = $_POST['num3'];
            $si = ($num1 * $num2 * $num3) / 100;
            echo "<br>Simple Interest is : $si";
        }
    ?>
</body>
</html>