function usoLoop(){
  let text = "";
  let i = 0;
  while (i < 10) {
    text += "<br>O número é " + i;
    i++;
  }
  document.getElementById("demo").innerHTML = text;
}

function usoFor(){
  let text = "";
   
  for (let i = 0; i < 10; i++) {
    text += "<br>O número é " + i;
  }
 
  document.getElementById("demo").innerHTML = text;
}

function limpar(){
  document.getElementById("demo").innerHTML = "";

}
