import 'dart:io';

void main(){

  print("Digite um número: ");

  int numero = int.parse(stdin.readLineSync()!);

  String? resultado = numero % 2 == 0? "Par" : "Ímpar";

  print("$numero é $resultado.");
}