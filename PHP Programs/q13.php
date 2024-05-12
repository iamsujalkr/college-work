<?php
$arr = [
"India"=>['Delhi','Mumbai'],
"USA"=>['Los Angeles', 'California'],
"Pakistan"=>['Lahore', 'Islamabad'],
"France"=>['Paris', 'Lyon']
];
echo "<table border = '2'>";
echo "<tr><th>Country</th><th>Cities</th></tr>";
foreach ($arr as $country => $cities) {
echo "<tr>";
echo "<td> $country </td>";
echo "<td>";
foreach ($cities as $city) {
echo "$city, ";
}
echo "</td>";
echo "</tr>";
}
echo "</table>";
?>