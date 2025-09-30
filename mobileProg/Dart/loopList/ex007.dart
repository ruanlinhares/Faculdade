import 'dart:io';

void main() {
  List<int> numeros = [1,2,3,4,5,6,7,8,9,10];
  
  print("Informe um número inteiro: ");
  int numeroinserido = int.parse(stdin.readLineSync()!);

  bool encontrado = false;

  numeros.forEach((numero) {
    if (numeroinserido == numero) {
      encontrado = true;
    }
  });

  if (encontrado) {
    print("O número está na lista.");
  } else {
    print("O número não está na lista.");
  }
}