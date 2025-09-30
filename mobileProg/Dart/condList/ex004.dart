import 'dart:io';

void main(){

  print("Informe seu salário: ");

  double salario = double.parse(stdin.readLineSync()!);

  double salarioDescontado = 0;
  int valorDesconto = 0;

  if(salario > 2000){
    salarioDescontado = salario - (salario * (15/100));
    valorDesconto = 15;
  }else if(salario > 1000 && salario <= 2000){
    salarioDescontado = salario - (salario * (10/100));
    valorDesconto = 10;
  }else{
    salarioDescontado = salario - (salario * (5/100));
    valorDesconto = 5;
  }

  print("Salário inicial: $salario \n Valor do desconto: $valorDesconto% \n Salário descontado: $salarioDescontado ");
}