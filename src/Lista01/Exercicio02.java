package Lista01;

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args){
        //EXERCÍCIO 02
        Scanner read = new Scanner(System.in);

        double cotacao, dollar, realconvert;

        System.out.println("DIGITE A COTAÇÃO DO DÓLAR PARA O REAL HOJE:");
        cotacao = read.nextDouble();
        System.out.println("DIGITE QUAL O VALOR EM DÓLARES PARA CONVERSÃO EM REAL:");
        dollar = read.nextDouble();

        realconvert = cotacao * dollar;

        System.out.printf("|US$ %.2f| dólares estão valendo |R$%.2f| reais na cotação de hoje.", dollar, realconvert);

        read.close();

    }
}
