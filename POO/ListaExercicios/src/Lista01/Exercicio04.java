package Lista01;

import java.util.Scanner;
public class Exercicio04 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        int nA, nB, nC, nD;

        System.out.println("Digite o primeiro valor:");
        nA = read.nextInt();
        System.out.println("Digite o segundo valor:");
        nB = read.nextInt();
        System.out.println("Digite o terceiro valor:");
        nC = read.nextInt();
        System.out.println("Digite o quarto valor:");
        nD = read.nextInt();

        System.out.println("==================");
        System.out.println("OPERAÇÕES DE SOMA");
        System.out.println("A + B = "+(nA + nB) +
                          "\nA + C = " + (nA + nC)+
                          "\nA + D = " + (nA + nD)+
                          "\nB + C = " + (nB + nC)+
                          "\nB + D = " + (nB + nD)+
                          "\nC + B = " + (nC + nD));
        System.out.println("==================");
        System.out.println("=========================");
        System.out.println("OPERAÇÕES DE MULTIPICAÇÃO");
        System.out.println("A * B = "+(nA * nB) +
                          "\nA * C = " + (nA * nC)+
                          "\nA * D = " + (nA * nD)+
                          "\nB * C = " + (nB * nC)+
                          "\nB * D = " + (nB * nD)+
                          "\nC * D = " + (nC * nD));
        System.out.println("=========================");

        read.close();





    }
}
