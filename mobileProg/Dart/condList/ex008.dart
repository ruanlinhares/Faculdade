import 'dart:io';

void main(){

  print("Digite um lado do triângulo: ");
  double lado1 = double.parse(stdin.readLineSync()!);
  
  print("Digite outro lado do triângulo: ");
  double lado2 = double.parse(stdin.readLineSync()!);
  
  print("Digite mais um lado do triângulo: ");
  double lado3 = double.parse(stdin.readLineSync()!);

  if(lado1 == lado2 && lado2 == lado3) print("O triangulo é equilátero.");
  else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) print("O triângulo é isósceles.");
  else print("O triângulo é escaleno.");
}