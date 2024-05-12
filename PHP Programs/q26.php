<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="post">
        <h4>Hidden Field</h4>
        <input type="hidden" name="hidden" value="admin">
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            echo $_POST['hidden'];
        }
    ?>
</body>
</html>