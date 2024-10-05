package Lista01;

import java.util.Scanner;

public class Exercicio08 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        double volume, raio, altura;

        System.out.println("PARA DESCOBRIR O VOLUME DA LATA DE ÓLEO");
        System.out.println("INSIRA O RAIO: ");
        raio = read.nextDouble();
        System.out.println("INSIRA A ALTURA: ");
        altura = read.nextDouble();

        volume = ((3.14159 * Math.pow(raio,2)) * altura);

        System.out.printf("O volume da lata de óleo é %.1f cm³", volume);

        read.close();

    }
}
