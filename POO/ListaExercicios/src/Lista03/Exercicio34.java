package Lista03;

import java.util.Scanner;

public class Exercicio34 {
    public static void main(String[] args) {
        //Scanner para entradad de dados
        Scanner read = new Scanner (System.in);

        //variaveis para armazenar meu numero atual, meu maior numero e menor.
        int numero, maiorNumero, menorNumero;

        //Interação com o usuário fora do loop.
        System.out.println("Digite um número positivo e inteiro: ");
        numero = read.nextInt();
        //Quardamos o numero atual nas duas variaveis para cumprir o paramentro do loop e entrar nele.
        maiorNumero = numero;
        menorNumero = numero;

        while(numero > 0){
            System.out.println("Digite um número positivo e inteiro: ");
            numero = read.nextInt();
            //se o numero atua for maior que o maior número digitado, armazene ele na variavel maior número.
            if(numero > maiorNumero){
                maiorNumero = numero;
            }
            //se o número atual for menor que o menor valor digitado e maior ou igual a 0 armazene na variavel menor número;
            if(numero < menorNumero && numero >=0){
                menorNumero = numero;
            }
        }
        //imprime o maior e o menor numero.
        System.out.printf("Maior número: %d", maiorNumero);
        System.out.printf("\nMenor número %d", menorNumero);

        read.close();
    }
}
