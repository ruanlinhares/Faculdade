import 'dart:io';

void main(){

  double somaNotas = 0;
  int nNotasInseridas = 0;
  String resp = "";

  do{

    print("Digite a nota: ");
    double nota = double.parse(stdin.readLineSync()!);

    somaNotas = somaNotas + nota;
    nNotasInseridas++;

    print("Deseja inserir mais uma nota?[s/n]");

    resp = stdin.readLineSync()!.toLowerCase();

  }while(resp != "n");

  double media = somaNotas/nNotasInseridas;

  print("A média do aluno foi $media.");
}