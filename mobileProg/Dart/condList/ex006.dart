import 'dart:io';

void main(){
  
  print("Digite uma letra: ");
  String? letra = stdin.readLineSync()!;

  switch(letra.toLowerCase()){
    case "a":
    case "e":
    case "i":
    case "o":
    case "u":
      print("$letra é vogal.");
      break;

    default:
      print("$letra é consoante.");
      break;
  }
}