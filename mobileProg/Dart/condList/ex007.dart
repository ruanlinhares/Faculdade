import 'dart:io';

void main(){
    print("Digite uma número: ");
    int dia = int.parse(stdin.readLineSync()!);

  switch(dia){
    case 1:
      print("Domingo");
      break;
    case 2:
      print("Segunda-Feira");
      break;
    case 3:
      print("Terça-Feira");
      break;
    case 4:
      print("Quarta-Feira");
      break;
    case 5:
      print("Quinta-Feira");
      break;
    case 6:
      print("Sexta-Feira");
      break;
    case 7:
      print("Sábado");
      break;

    default:
      print("Dia da semana não existe.");
      break;
  }
}