package Lista02;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Exercicio19 {
    public static void main(String[] args) {
        //Scanner que permite a entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variaveis que armazenam os valores dos lados do triângulo.
        double ladoA, ladoB, ladoC;

        /*Uma exception para que permite digitar valores não numéricos
        que exibe uma mensagem de erro como o motivo*/
        try {
            //Interação com o usuário.
            System.out.println("Digite o valor do lado A do triângulo: ");
            ladoA = read.nextDouble();
            System.out.println("Digite o valor do lado B do triângulo: ");
            ladoB = read.nextDouble();
            System.out.println("Digite o valor do lado C do triângulo: ");
            ladoC = read.nextDouble();


            //Verificação para ver se o triângulo é equilátero, isósceles ou escaleno.
            if (ladoA == ladoB && ladoB == ladoC) {
                System.out.println("O triângulo é equilátero");
            } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
                System.out.println("O triângulo é isósceles");
            } else if (ladoA != ladoB && ladoB != ladoC) {
                System.out.println("O triângulo é escaleno");
            } else {
                System.out.println("Os lados fonecidos não caracterizam um triângulo");
            }

            read.close();
        }catch (InputMismatchException ex){
            System.out.println("O programa somente aceita valores numéricos");
        }
    }
}
