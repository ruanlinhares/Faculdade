package Lista02;

import java.util.Scanner;

public class Exercicio21 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        int numero;

        System.out.println("Digite um número inteiro: ");
        numero = read.nextInt();

        if (numero > 0){
            System.out.println("Este número é positivo");
        }else if(numero < 0){
            System.out.println("Este é um numero negativo");
        }else{
            System.out.println("Este é um número neutro");
        }

        read.close();
    }
}
