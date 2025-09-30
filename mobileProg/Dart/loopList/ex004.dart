void main(){
  int soma = 0;

  for(int i = 1; i < 101; i++){
    if(i % 2 != 0){
      soma = soma + i;
    }  
  }

  print("A soma dos número ímpares é $soma");
}