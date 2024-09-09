package Lista02;

import java.util.Scanner;

public class Exercicio13NOTFINISH {
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

        /*Ordenando os números utilizando a tecnica bubble sort, aprendida na aula.
        de estrutura de dados*/
        for(int i = 3-1; i >=1; i--){
          for(int j = 0; j < i; j++){
              if(vetor[2] > vetor[1]){
                  int aux;
                  aux = vetor[1];
                  vetor[1] = vetor[2];
                  vetor[2] = aux;
              }
          }

        }
        System.out.print(vetor[i]);

    }
}
