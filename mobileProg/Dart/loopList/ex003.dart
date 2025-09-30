import 'dart:io';

void main(){

  print("Digite um número para saber sua tabuada: ");
  int numero = int.parse(stdin.readLineSync()!);

  for(int i = 0; i < 11; i++){

    int resultado = numero * i;
    print("$numero X $i = $resultado");
  }

}