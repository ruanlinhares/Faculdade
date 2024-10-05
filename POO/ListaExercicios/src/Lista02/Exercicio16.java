package Lista02;

import java.util.Scanner;

public class Exercicio16 {
    public static void main(String[] args){
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis para armazenar nossas números.
        double n1, n2;

        //Interação com o usuário, pedindo os valores.
        System.out.println("Digite um número: ");
        n1 = read.nextDouble();
        System.out.println("Digite outro número: ");
        n2 = read.nextDouble();

        //Verificando quem é maior que quem, ou see igual.
        if(n1 > n2){
            System.out.printf("%.1f é maior que %.1f", n1, n2);
        } else if(n1 == n2){
            System.out.printf("%.1f é igual a %.1f", n1, n2);
        }else {
            System.out.printf("%.1f é maior que %.1f",n2, n1);
        }

        read.close();
    }
}
