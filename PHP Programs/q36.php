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

$sql = "CREATE TABLE `student` (`rollno` INT(11) NOT NULL , 
`name` VARCHAR(50) NOT NULL , `course` VARCHAR(20) NOT NULL , `phone` VARCHAR(10) NOT NULL ,
 PRIMARY KEY (`rollno`), UNIQUE (`phone`))";
$result = mysqli_query($conn, $sql);
if($result){
    echo "Table created successfully";
}
else{
    echo "Some error ocurred";
}

$sql = "DROP TABLE users";
$result = mysqli_query($conn, $sql);
if($result){
    echo "Table deleted successfully";
}
else{
    echo "Some error ocurred";
}
?>