package Lista03;

import java.util.Scanner;

public class Exercicio32n {
    public static void main(String[] args) {
        Scanner read = new Scanner (System.in);


        int numero;

        System.out.println("Digite um número de 1 e 9: ");
        numero  = read.nextInt();

        if(numero > 0 && numero <10){
            int i = 0;
            while(i <= 20){
                if(i % 2 != 0){
                    System.out.println(i);
                }
                i = i + 2;
            }
            System.out.println(numero);
        }else {
            System.out.println("Valor inválido. Digite um número entre 1 e 9");
        }
    }
}
