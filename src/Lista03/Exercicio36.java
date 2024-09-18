package Lista03;

import java.util.Scanner;

public class Exercicio36 {
    public static void main(String[] args) {
        //permite a entrada de dados
        Scanner read = new Scanner(System.in);
        //variaveis para as operações de maior e menor valor.
        int i, numero, maiorValor, menorValor, somaValores = 0;
        //variavel para tirar a média.
        double media;

        //Interação com o usuário fora do loop.
        System.out.println("Digite um número: ");
        numero = read.nextInt();
        //Quardamos o numero atual nas duas variaveis para cumprir o paramentro do loop e entrar nele.
        maiorValor = numero;
        menorValor = numero;
        //acumulao primeiro valor.
        somaValores += numero;
        // aqui fazemos um loop para mais 9 entradas do usuario.
        for ( i = 0; i < 10; i+=1) {
            System.out.println("Digite um número: ");
            numero = read.nextInt();
            //se o numero atua for maior que o maior número digitado, armazene ele na variavel maior número.
            if (numero > 0) {
                if (numero > maiorValor) {
                    maiorValor = numero;
                }else if(numero < menorValor) {//se o número atual for menor que o menor valor digitado e maior ou igual a 0 armazene na variavel menor número;
                    menorValor = numero;
                }
                //acumula os valores digitados somando-os
                somaValores += numero;
            } else{ //se o número digitado não for positivo e inteiro  essa mensagem é exibida.
                System.out.println("Número tem que ser maior inteiro e positivo");
            }
        }
        //faz a média da soma dos 10 valores dividido por 10 que foram o número de entradas
        media = somaValores/10.0;

        //imprime o menor e o maior valor, além da média de todos os valores
        System.out.printf("O maior número é %d", maiorValor);
        System.out.printf("\nO menor número é %d", menorValor);
        System.out.printf("\nA média dos valores é %.1f", media);

        read.close();
    }
}
