<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <h4>Registration form</h4>
    <form method='post'>
        <p><label>
            Enter the name : <input type="text" name="name">
        </label></p>
        <p><label>
            Enter the email : <input type="email" name="email">
        </label></p>
        <p><label>
            Enter the Password : <input type="password" name="password">
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $name = $_POST['name'];
            $email = $_POST['email'];
            $password = $_POST['password'];
            echo "<br>$name";
            echo "<br>$email";
            echo "<br>$password";
        }
    ?>
</body>
</html>