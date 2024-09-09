package Lista01;

import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {
       //EXCÍCICIO 01
       Scanner read = new Scanner(System.in);

       int quantidadeMinima, quantidadeMaxima;
       float estoqueMedio;

       System.out.println("Digite a quantidade mínima de peças:");
       quantidadeMinima = read.nextInt();
       System.out.println("Digite a quantidade máxima de peças:");
       quantidadeMaxima = read.nextInt();

       estoqueMedio = (quantidadeMinima + quantidadeMaxima)/2;

       System.out.println("ESTOQUE MÉDIO: " + estoqueMedio);

       read.close();

    }
}
