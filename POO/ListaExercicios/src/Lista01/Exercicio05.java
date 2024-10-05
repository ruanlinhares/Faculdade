package Lista01;

import java.util.Scanner;

public class Exercicio05 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        double temp_gasto, velocidade, distancia;

        System.out.println("QUAL O TEMPO GASTO NA VIAGEM:");
        temp_gasto = read.nextDouble();
        System.out.println("QUAL A VELOCIDADE MÉDIA NA VIAGEM:");
        velocidade = read.nextDouble();

        distancia = temp_gasto * velocidade;

        double litros_gastos = distancia / 12;

        System.out.printf("QUANTIDADE DE COMBUSTÍVEL GASTO: %.1f litros", litros_gastos);
        System.out.printf("\nVELOCIDADE MÉDIA: %.1f km/h", velocidade);
        System.out.println("\nTEMPO GASTO NA VIAGEM: " + temp_gasto + " horas");
        System.out.printf("DISTÂNCIA PERCORRIDA: %.1f km", distancia);


        read.close();
    }
}
