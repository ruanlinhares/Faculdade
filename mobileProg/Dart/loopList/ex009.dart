import 'dart:io';

void main() {
  print("Digite os números separados por espaço:");
  String? entrada = stdin.readLineSync();

  if (entrada != null && entrada.isNotEmpty) {
    List<int> numeros = entrada.split(' ').map((e) => int.parse(e)).toList();

    for (int i = 0; i < numeros.length; i++) {
      if (numeros[i] % 2 != 0) {
        numeros[i] = 0;
      }
    }

    print("Lista resultante:");
    print(numeros);
  } else {
    print("Nenhum número digitado.");
  }
}