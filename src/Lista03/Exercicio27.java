package Lista03;

import java.util.Scanner;

public class Exercicio27 {
    public static void main(String[] args) {
        //Scanner para a entrada de dados
        Scanner read = new Scanner(System.in);

        //variavel para guardar o número de processos que deseja fazer.
        int num_process;
        //vetor para guardadar os números escilhidos para as quantidades de processos.
        int[] vetor_process;

        //interação com o usuario para saber a quantidade de numeros para processar.
        System.out.println("Digite a quantidade de números que deseja processar: ");
        num_process = read.nextInt();

        //Se a quantidade for maior que 0.
        if(num_process > 0) {

            //Definimos o tamanho do nosso vetor com a quantidade que o usuario digitou.
            vetor_process = new int[num_process];

            /*Aqui o programa pega os elementos digitados e aloca nas posições
            do vetor, se o usuario definiu 4 posições, ele só pode digitar 4 valores
            Ex: escolheu 4 processos pode descobrir o fatorial de 4 números distintos*/
            for(int j = 0; j < vetor_process.length; j+=1) {
                System.out.println("Quais números gostaria de saber o fatorial: ");
                vetor_process[j] =read.nextInt();
            }

            for(int i = 0; i <= vetor_process.length - 1; i+=1) {
                int fatorial = vetor_process[i] * (vetor_process[i] - 1);
                System.out.printf("%d! = %d\n", vetor_process[i], fatorial);
                //ainda falta terminar.
            }

        }else{
            System.out.println("Valor tem que ser inteiro e maior que positivo");
        }

    }
}
