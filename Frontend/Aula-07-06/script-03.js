function maiorValor(){
  let a = parseInt(document.getElementById('valor01').value);
  let b = parseInt(document.getElementById('valor02').value);
  let c = parseInt(document.getElementById('valor03').value);
 
  
switch (maiorValor) {
  case a>b && a>c:
    document.getElementById('demo').innerHTML = a;
    break;
  case b>a && b>c:
    document.getElementById('demo').innerHTML = b;
    break;
    default:
    document.getElementById('demo').innerHTML = c;
    break;
    

}
}