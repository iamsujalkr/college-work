<?php
$server = "localhost";
$username = "root";
$password = "";

$conn = mysqli_connect($server, $username, $password);
if(!$conn){
    echo "Could not connect to Server";
    die("Connection Failed");
}

$sql = "CREATE DATABASE test";
$result = mysqli_query($conn, $sql);
if($result){
    echo "DATABASE created successfully";
}
else{
    echo "Some error ocurred";
}


$sql = "DROP DATABASE test";
$result = mysqli_query($conn, $sql);
if($result){
    echo "DATABASE deleted successfully";
}
else{
    echo "Some error ocurred";
}
?>