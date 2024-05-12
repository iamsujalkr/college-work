<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <p><label>
            Enter the number : <input type="text" name="num1">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $num1 = $_POST['num1'];
            $rev = 0;
            while((int)$num1 != 0){
                $rem = $num1 % 10;
                $rev = ($rev * 10) + $rem;
                $num1 = $num1/10;
            }
            echo "<br>Reversed number is : $rev";
        }
    ?>
</body>
</html>