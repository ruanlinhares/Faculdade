package Lista03;

import java.util.Scanner;

public class Exercicio39 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int numero;
        String continuar;

        do {
            System.out.println("Digite um número inteiro: ");
            numero = read.nextInt();

            if(numero % 2 == 0 && numero > 0){
                System.out.printf("%d é positivo e par\n", numero);
            }else if (numero % 2 == 0 && numero < 0){
                System.out.printf("%d é negativo e par\n", numero);
            }else if(numero % 2 != 0 && numero > 0){
                System.out.printf("%d é positivo e ímpar\n", numero);
            }else if(numero % 2 != 0 && numero < 0){
                System.out.printf("%d é negativo e ímpar\n", numero);
            }else{
                System.out.println("Valor neutro");
            }

            System.out.println("Deseja continuar?[s/n]");
            continuar = read.next();
        }while(continuar.equals("s")||continuar.equals("S"));
    }
}
