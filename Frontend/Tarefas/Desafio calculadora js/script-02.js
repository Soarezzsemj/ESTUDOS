function soma(){
  var a = document.getElementById('valor01').value;
  var b = document.getElementById('valor02').value;
  //document.getElementById('demo').innerHTML = a + b;
 document.getElementById('mais').innerHTML = parseInt(a) + parseInt(b);
document.getElementById('menos').innerHTML = parseInt(a) - parseInt(b);
document.getElementById('divide').innerHTML = parseInt(a) / parseInt(b);
document.getElementById('mult').innerHTML = parseInt(a) * parseInt(b);
}