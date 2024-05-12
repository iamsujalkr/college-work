<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<form action="uploader.php" method="post" enctype="multipart/form-data">  
    Select File:  
    <input type="file" name="fileToUpload"/>  
    <input type="submit" value="Upload Image" name="submit"/>  
</form>  
<?php  
if($_SERVER['REQUEST_METHOD']=="POST"){
    $target_path = "e:/";  
    $target_path = $target_path.basename( $_FILES['fileToUpload']['name']);   
    
    if(move_uploaded_file($_FILES['fileToUpload']['tmp_name'], $target_path)) {  
        echo "File uploaded successfully!";  
    } else{  
        echo "Sorry, file not uploaded, please try again!";  
    }
    $url =  
    'https://media.geeksforgeeks.org/wp-content/uploads/gfg-40.png'; 
    
    $file_name = basename($url); 
    
    if (file_put_contents($file_name, file_get_contents($url))) 
    { 
        echo "File downloaded successfully"; 
    } 
    else
    { 
        echo "File downloading failed."; 
    } 
} 
?>  
</body>
</html>