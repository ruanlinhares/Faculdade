import 'dart:io';

void main(){
  print("Digite um número: ");

  int num = int.parse(stdin.readLineSync()!);

  String? resultado = num > 0 ? "Positivo": "negativo"; 

  if(num == 0) resultado = "Zero é nulo";
  
  print(resultado);
}