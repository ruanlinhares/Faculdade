package Lista02;

import java.util.Scanner;

public class Exercicio13 {
    public static void main(String[] args){
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis n1,n2 e n3 para serem ordenadas
        int[] vetor = new int[3];

        //Interação com o usuário, pedindo o valores para ordenar em ordem decrescente.
        System.out.println("Digite um valor inteiro: ");
        vetor[0] = read.nextInt();
        System.out.println("Digite um valor inteiro: ");
        vetor[1] = read.nextInt();
        System.out.println("Digite um valor inteiro: ");
        vetor[2] = read.nextInt();

        /*Ordenando os números utilizando a tecnica bubble sort, aprendida na aula
        de estrutura de dados*/

        // Esse primeiro for percorre a operação 3 vezes que é o número de elementos do vetor.
        for(int i = vetor.length - 1; i > 0; i--) {
            //Esse segundo for percorre os elementos do vetor comparando eles 3 vezes.
            for (int j = 0; j < i; j++) {
                if (vetor[j] < vetor[j + 1]) {
                    //Aqui ele compara o elemento atual do vetor com o próximo.
                    //e só ocorrerá a troca se o elemento atual for menor que o próximo.
                    int aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }

        //For percorre o vetor exibindo todos os seus elementos.
        for(int i = 0; i < 3; i++){
            System.out.print(vetor[i]+" ");
        }
        read.close();
    }
}
