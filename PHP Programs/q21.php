<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="get">
        <p><label>
            Enter the username : <input type="text" name="user">
        </label></p>
        <p><label>
            Enter the password : <input type="password" name="password">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <br>
    <form method="post">
        <p><label>
            Enter the username : <input type="text" name="user">
        </label></p>
        <p><label>
            Enter the password : <input type="password" name="password">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == "GET"){
            if(isset($_GET['user'])){
                $user = $_GET['user'];
                $pass = $_REQUEST['password'];
                echo "Form 1 data<br>";
                echo $user;
                echo "<br>";
                echo $pass;
            }
        }
        if($_SERVER['REQUEST_METHOD'] == "POST"){
            if(isset($_POST['user'])){
                $user = $_POST['user'];
                $pass = $_REQUEST['password'];
                echo "Form 2 data<br>";
                echo $user;
                echo "<br>";
                echo $pass;
            }
        }
    ?>
</body>
</html>