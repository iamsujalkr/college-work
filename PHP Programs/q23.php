<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <center><h2>College Registration Form</h2></center>
<form name="clgreg" method="post">
<fieldset>
<p><label>Salutation : 
<select name="Salutation">
    <option>Mr.</option>
    <option>Mrs.</option>
    <option>Ms.</option>
</select></label></p>
<p><label>First Name : <input type="text" name="Fname"></label></p>
<p><label>Last Name : <input type="text" name="Lname"></label></p>
<p>Gender :
    <label><input type="radio" name="Gender"> Male</label>
    <label><input type="radio" name="Gender"> Female</label>
    <label><input type="radio" name="Gender"> Others</label>
</p>
<p><label>Date of Birth : <input type="date" name="DOB"></label></p>
<p><label>Age (as on 1 Aug 2023) : <input type="number"></label></p>
<p><label>Email : <input type="email"></label></p>
<p><label>Contact Number : <input type="tel"></label></p>
<p><label>Course : 
    <select name="course">
        <option>BCA</option>
        <option>BBA</option>
        <option>B.com</option>
        <option>BA-LLB</option>
        <option>MBA</option>
        <option>B.ed</option>
        <option>B.tech</option>
    </select>
</label></p>
<p><label>Shift : 
    <select name="shift">
        <option>Morning</option>
        <option>Evening</option>
    </select>
</label></p>
<p><label>Father's Name : <input type="text"></label></p>
<p><label>Mother's Name : <input type="text"></label></p>
<label>Address : <br>
    <textarea rows="5" cols="40"></textarea>
</label>
<p><input type="submit" value="Submit">  <input type="reset" value="Reset"></p>
</fieldset>
</form>
</body>
</html>