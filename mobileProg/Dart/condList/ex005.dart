import 'dart:io';

void main(){
  print("Digite um número: ");
  double num1 = double.parse(stdin.readLineSync()!);

  print("Digite outro número: ");
  double num2 = double.parse(stdin.readLineSync()!);

  print("Qual operação deseja realizar?(+,-,*,/)");
  String? operation = stdin.readLineSync();

  switch(operation){
    case "+":
      print(num1 + num2);
      break;
    
    case "-":
      print(num1 - num2);
      break;
    
    case "*":
      print(num1 * num2);
      break;
    
    case "/":
      print(num1 / num2);
      break;
    
    default:
      print("Operação inválida!");
      break;
  }

}