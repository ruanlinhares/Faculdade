package Lista03;

import java.util.Scanner;

public class Exercicio36 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int i, numero, maiorValor = 0, menorValor = 0, somaValores = 0;
        double media;

        for ( i = 0; i <= 10; i+=1) {
            System.out.println("Digite um número: ");
            numero = read.nextInt();
            if (numero > 0) {
                if (numero > maiorValor) {
                    maiorValor = numero;
                }else if(numero < menorValor) {
                    menorValor = numero;
                }
                somaValores += numero;
            } else{
                System.out.println("Número tem que ser maior inteiro e positivo");
            }
        }
        media = somaValores/10.0;

        System.out.printf("O maior número é %d", maiorValor);
        System.out.printf("\nO menor número é %d", menorValor);
        System.out.printf("\nA média dos valores é %.1f", media);
    }
}
