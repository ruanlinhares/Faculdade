package Lista03;

import java.util.Scanner;

public class Exercicio32 {
    public static void main(String[] args) {
        Scanner read = new Scanner (System.in);


        int numero,soma=0;

        System.out.println("Digite um número de 1 e 9: ");
        numero  = read.nextInt();

        if(numero > 0 && numero <10){
            int i = numero;
            while(i <= 40){
                if(i % 2 != 0){
                    System.out.println(i);
                    soma += i*i;
                }
                i+=1;
            }
            System.out.println("A soma dos quadrados dos 20 primeiros números é " + soma);
        }else {
            System.out.println("Valor inválido. Digite um número entre 1 e 9");
        }

        read.close();
    }
}
