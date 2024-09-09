package Lista02;

import java.util.Scanner;

public class Exercicio11 {
    public static void main(String[] args) throws InterruptedException {
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis A e B para troca e uma variavel para auxiliar o processo.
        int A, B, aux;

        //Interação com o usuário, pedindo os valores para serem trocados.
        System.out.println("Digite um valor A: ");
        A = read.nextInt();
        System.out.println("Digite um valor B: ");
        B = read.nextInt();

        //Operação de troca
        aux = A; //aux recebe o valor de A
        A = B;// B copia seu valor para A
        B = aux;//B recebe o valor de A que foi armazenado em aux;

        //Um contador usando o método Thread.sleep() para fazer suspense
        System.out.println("Trocando valores em...");
        for(int i = 3; i >= 1 ; i--){
            System.out.println(i);
            Thread.sleep(999);
        }

        //Resultado da Troca
        System.out.printf("\nA = %d\nB = %d",A,B);

    }
}
