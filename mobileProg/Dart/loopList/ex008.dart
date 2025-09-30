import 'dart:io';

void main() {
  print("Digite os números separados por espaço:");
  String? entrada = stdin.readLineSync();

  if (entrada != null && entrada.isNotEmpty) {
    List<int> numeros = entrada.split(' ').map((e) => int.parse(e)).toList();

    print("Números pares da lista:");

    numeros.forEach((numero) {
      if (numero % 2 == 0) {
        print(numero);
      }
    });
  } else {
    print("Nenhum número digitado.");
  }
}