<?php
$server = "localhost";
$username = "root";
$password = "";
$dbname = "test";

$conn = mysqli_connect($server, $username, $password, $dbname);
if(!$conn){
    echo "Could not connect to Server";
    die("Connection Failed");
}

$sql = "INSERT INTO student VALUES (102, 'SUJAL', 'BCA')";
$result = mysqli_query($conn, $sql);
if($result){
    echo "Record added successfully";
}
else{
    echo "Some error ocurred";
}

$sql = "DELETE FROM student WHERE rollno = 102";
$result = mysqli_query($conn, $sql);
if($result){
    echo "Record deleted successfully";
}
else{
    echo "Some error ocurred";
}

$sql = "UPDATE student SET course = 'BBA' WHERE rollno = 102";
$result = mysqli_query($conn, $sql);
if($result){
    echo "Record updated successfully";
}
else{
    echo "Some error ocurred";
}

$sql = "SELECT * FROM student";
$result = mysqli_query($conn, $sql);
while($row = mysqli_fetch_assoc($result)){
    print_r($row);
    echo "<br>";
}
?>