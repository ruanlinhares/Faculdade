import 'dart:io';

void main(){
  print("Digite um ano para a saber se é bissexto: ");

  int ano = int.parse(stdin.readLineSync()!);

  if(ano % 4 == 0 || ano % 400 == 0) print("$ano é bissexto.");
  else print("$ano é um ano regular.");
}