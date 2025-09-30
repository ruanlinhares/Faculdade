import 'dart:io';

void main() {
  print("Digite os números separados por espaço:");
  String? entrada = stdin.readLineSync();

  if (entrada != null && entrada.isNotEmpty) {
    List<int> numeros = entrada.split(' ').map((e) => int.parse(e)).toList();

    int soma = 0;

    numeros.forEach((numero) {
      soma += numero;
    });

    print("A soma dos elementos da lista é: $soma");
  } else {
    print("Nenhum número digitado.");
  }
}