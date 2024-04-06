<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "notes";
$conn = mysqli_connect($servername, $username, $password, $dbname);
$insert = false;
$update = false;
$delete = false;
if(!$conn){
	die("Unable to connect to Server");
}

if($_SERVER['REQUEST_METHOD'] == 'POST') {
	if(isset($_POST['snoEdit'])){
		$sno = $_POST['snoEdit'];
		$title = $_POST['titleEdit'];
		$desc = $_POST['descriptionEdit'];
		$update_sql = "UPDATE `notes` SET `title` = '$title', `description` = '$desc' WHERE `notes`.`sno` = $sno";
		$result = mysqli_query($conn, $update_sql);
		if($result) {
			$update = true;
		}
	}
	elseif(isset($_POST['snoDelete'])) {
		$sno = $_POST['snoDelete'];
		$delete_sql = "DELETE FROM `notes` WHERE `notes`.`sno` = $sno";
		$result = mysqli_query($conn, $delete_sql);
		if($result) {
			$delete = true;
		}
	}
	else{
		$title = $_POST['title'];
		$desc = $_POST['description'];
		$insert_sql = "INSERT INTO `notes` VALUES (NULL, '$title', '$desc', current_timestamp())";
		$result = mysqli_query($conn, $insert_sql);
		if($result) {
			$insert = true;
		}
	}
}
?>
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
    <link rel="stylesheet" href="https://cdn.datatables.net/2.0.3/css/dataTables.dataTables.css" />
	<title>Notes App</title>
  </head>

<!-- Edit Modal -->
<div class="modal fade" id="editModal" data-bs-backdrop="static" data-bs-keyboard="false" tabindex="-1" aria-labelledby="editModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title" id="editModalLabel">Edit Note</h5>
        <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
      </div>
	  <form method="Post">
      	<div class="modal-body">
			<input type="hidden" id="snoEdit" name="snoEdit">
			<div class="mb-3">
			  <label for="titleEdit" class="form-label">Note Title</label>
			  <input type="text" class="form-control" id="titleEdit" name="titleEdit" aria-describedby="emailHelp" required>
			</div>
			<div class="mb-3">
				<label for="descriptionEdit" class="form-label">Note Description</label>
				<textarea class="form-control" id="descriptionEdit" name="descriptionEdit" rows="3" required></textarea>
			</div>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Cancel</button>
        <button type="submit" class="btn btn-primary">Save Changes</button>
      	</div>
	  </form>
    </div>
  </div>
</div>

<!-- Delete Modal -->
<div class="modal fade" id="deleteModal" data-bs-backdrop="static" data-bs-keyboard="false" tabindex="-1" aria-labelledby="deleteModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title" id="deleteModalLabel">Delete Note</h5>
        <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
      </div>
	  <form method="Post">
		<div class="modal-body">
			<input type="hidden" id="snoDelete" name="snoDelete">
			Do you want to really delete this note?
		</div>
		<div class="modal-footer">
			<button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Cancel</button>
			<button type="submit" class="btn btn-primary">Confirm Delete</button>
		</div>
	  </form>
    </div>
  </div>
</div>
  <body>
<!-- NavBar -->
    <nav class="navbar navbar-expand-lg navbar-dark bg-primary">
        <div class="container-fluid">
          <a class="navbar-brand" href="#"><img src="/assets/PHP-logo.svg.png" height="35px"></a>
          <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
          </button>
          <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav me-auto mb-2 mb-lg-0">
              <li class="nav-item">
                <a class="nav-link active" aria-current="page" href="#">Short Notes App</a>
              </li>
              </li>
            </ul>
          </div>
        </div>
      </nav>
	<svg xmlns="http://www.w3.org/2000/svg" style="display: none;">
	<symbol id="check-circle-fill" fill="currentColor" viewBox="0 0 16 16">
		<path d="M16 8A8 8 0 1 1 0 8a8 8 0 0 1 16 0zm-3.97-3.03a.75.75 0 0 0-1.08.022L7.477 9.417 5.384 7.323a.75.75 0 0 0-1.06 1.06L6.97 11.03a.75.75 0 0 0 1.079-.02l3.992-4.99a.75.75 0 0 0-.01-1.05z"/>
	</symbol>
	<symbol id="info-fill" fill="currentColor" viewBox="0 0 16 16">
		<path d="M8 16A8 8 0 1 0 8 0a8 8 0 0 0 0 16zm.93-9.412-1 4.705c-.07.34.029.533.304.533.194 0 .487-.07.686-.246l-.088.416c-.287.346-.92.598-1.465.598-.703 0-1.002-.422-.808-1.319l.738-3.468c.064-.293.006-.399-.287-.47l-.451-.081.082-.381 2.29-.287zM8 5.5a1 1 0 1 1 0-2 1 1 0 0 1 0 2z"/>
	</symbol>
	<symbol id="exclamation-triangle-fill" fill="currentColor" viewBox="0 0 16 16">
		<path d="M8.982 1.566a1.13 1.13 0 0 0-1.96 0L.165 13.233c-.457.778.091 1.767.98 1.767h13.713c.889 0 1.438-.99.98-1.767L8.982 1.566zM8 5c.535 0 .954.462.9.995l-.35 3.507a.552.552 0 0 1-1.1 0L7.1 5.995A.905.905 0 0 1 8 5zm.002 6a1 1 0 1 1 0 2 1 1 0 0 1 0-2z"/>
	</symbol>
	</svg>

<!-- Alert messages -->
	<?php 
		if($insert) {
			echo"<div class='alert alert-success alert-dismissible fade show' role='alert'>
			<svg class='bi flex-shrink-0 me-2' width='24' height='24' role='img' aria-label='Success:'><use xlink:href='#check-circle-fill'/></svg>
			<strong>Success! </strong> Note added succesfully.
			<button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
		  </div>";
		}
		if($update) {
			echo"<div class='alert alert-success alert-dismissible fade show' role='alert'>
			<svg class='bi flex-shrink-0 me-2' width='24' height='24' role='img' aria-label='Success:'><use xlink:href='#check-circle-fill'/></svg>
			<strong>Success! </strong> Note updated succesfully.
			<button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
		  </div>";
		}
		if($delete) {
			echo"<div class='alert alert-success alert-dismissible fade show' role='alert'>
			<svg class='bi flex-shrink-0 me-2' width='24' height='24' role='img' aria-label='Success:'><use xlink:href='#check-circle-fill'/></svg>
			<strong>Success! </strong> Note deleted succesfully.
			<button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
		  </div>";
		}
	?>
<!-- Form for taking notes deatils -->
	<div class="container my-5">
		<h2>Add a note</h2>
		<form method="Post">
			<div class="mb-3">
			  <label for="title" class="form-label">Note Title</label>
			  <input type="text" class="form-control" id="title" name="title" aria-describedby="emailHelp" required>
			</div>
			<div class="mb-3">
				<label for="description" class="form-label">Note Description</label>
				<textarea class="form-control" id="description" name="description" rows="3" required></textarea>
			</div>
			<button type="submit" class="btn btn-primary">Add Note</button>
		  </form>
	</div>
	<div class="container my-4">
		<table class="table" id="myTable">
			<thead>
				<tr>
				<th scope="col">S.no</th>
				<th scope="col">Title</th>
				<th scope="col">Description</th>
				<th scope="col">Created on </th>
				<th scope="col">Actions</th>
				</tr>
			</thead>
			<tbody>
			<?php
			$display_sql =  "SELECT * FROM `notes`";
			$result = mysqli_query($conn, $display_sql);
			$sno = 0;
			while($row = mysqli_fetch_assoc($result)) {
				$sno++;
				echo "<tr>
				<th scope='row'>".$sno."</th>
				<td>".$row['title']."</td>
				<td>".$row['description']."</td>
				<td>".$row['tstamp']."</td>
				<td><button type='button' class='edit btn btn-primary' id=".$row['sno'].">Edit</button>
				<button type='button' class='delete btn btn-primary' id=d".$row['sno'].">Delete</button></td>
				</tr>";
			}
			?>
			</tbody>
		</table>
	</div>
	<hr>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>
	<script src="https://code.jquery.com/jquery-3.7.1.min.js" integrity="sha256-/JqT3SQfawRcv/BIHPThkBvs0OEvtFFmqPF/lYI/Cxo=" crossorigin="anonymous"></script>
	<script src="https://cdn.datatables.net/2.0.3/js/dataTables.js"></script>
	<script>
		// converting a normal table into Datatable
	$(document).ready( function () {
		$('#myTable').DataTable();
		} );
	</script>
	<script>
		// responding to Edit buttons
		edits = document.getElementsByClassName('edit');
		Array.from(edits).forEach((element)=>{
			element.addEventListener('click', (e)=>{
				tr = e.target.parentNode.parentNode;
				title = tr.getElementsByTagName('td')[0].innerText;
				description = tr.getElementsByTagName('td')[1].innerText;
				titleEdit.value = title;
				descriptionEdit.value = description;
				snoEdit.value = e.target.id;
				var myModal = new bootstrap.Modal(document.getElementById('editModal'));
				myModal.toggle();
			})
		})
		// responding to delete buttons
		deletes = document.getElementsByClassName('delete');
		Array.from(deletes).forEach((element)=>{
			element.addEventListener('click', (e)=>{
				snoDelete.value = e.target.id.substr(1,);
				var myModal = new bootstrap.Modal(document.getElementById('deleteModal'));
				myModal.toggle();
			})
		})
	</script>
	<script>
		// Closing the alert 
		setTimeout(function () { 
		$('.alert').alert('close'); 
		}, 2500);
	</script>
</body>
</html>