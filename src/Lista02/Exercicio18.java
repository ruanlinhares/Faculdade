package Lista02;

import java.util.Scanner;

public class Exercicio18 {
    public static void main(String[] args) {
        //Scanner permite a entrada de dados no código.
        Scanner read = new Scanner(System.in);

        //Variavel para guardar nosso inteiro.
        int number;

        //Interação com o usuário.
        System.out.println("Digite um número inteiro : ");
        number = read.nextInt();

        switch(number){
            case 1 :
                System.out.println("um");
                break;
            case 2:
                System.out.println("dois");
                break;
            case 3:
                System.out.println("três");
                break;
            default:
                System.out.println("Código inválido");
                break;
        }

        read.close();


    }
}
