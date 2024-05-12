<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Purchase Order</title>
</head>
<body>
    <form method="post">
        <h4>Purchase Order Form</h4>
        <p><label>
            Name : <input type="text" name="name" >
        </label></p>
        <p><label>
            Item : <input type="text" name="item" >
        </label></p>
        <p><label>
            Quantity : <input type="text" name="quant" >
        </label></p>
        <p><label>
            Rate : <input type="text" name="rate" >
        </label></p>
        <input type="submit" value="Submit">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD'] == "POST"){
            $name = $_POST['name'];
            $item = $_POST['item'];
            $quant = $_POST['quant'];
            $rate = $_POST['rate'];
            echo "Name : $name<br>";
            echo "Item : $item<br>";
            echo "Quantity: $quant<br>";
            echo "Rate : $rate<br>";
            echo "Total Price :".$quant * $rate;
        }
    ?>
</body>
</html>