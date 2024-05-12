<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Food Corner</title>
</head>
<body>
    <form method="post">
        <h4>Food Corner Form</h4>
        <p><label>
            Name : <input type="text" name="name" >
        </label></p>
        <p><label>
            Item : <input type="text" name="item" >
        </label></p>
        <p><label>
            Quantity : <input type="text" name="quant" >
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == "POST"){
            $name = $_POST['name'];
            $item = $_POST['item'];
            $quant = $_POST['quant'];
            echo "Name : $name<br>";
            echo "Item : $item<br>";
            echo "Quantity: $quant";
        }
    ?>
</body>
</html>