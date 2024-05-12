<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <form method="get">
        <p><label>
            Enter name : <input type="text" name="name">
        </label></p>
    </form>
<?php
$query = parse_str($_SERVER['QUERY_STRING'], $parameters);
echo $parameters['name'];

?>
</body>
</html>