package Lista03;

import java.util.Scanner;

public class Exercicio42 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int numero, maiorNumero, menorNumero;

        System.out.println("Digite um número:");
        numero = read.nextInt();

        maiorNumero = numero;
        menorNumero = numero;

        while(numero != 0){
            System.out.println("Digite um número");
            numero = read.nextInt();
            if (numero > maiorNumero) {
                maiorNumero = numero;
            }else if(numero < menorNumero) {
                menorNumero = numero;
            }
        }
        System.out.println("O maior número: " + maiorNumero);
        System.out.println("O menor número: " + menorNumero);
    }
}
