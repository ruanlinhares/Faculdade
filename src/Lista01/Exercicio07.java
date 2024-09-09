package Lista01;

import java.util.Scanner;

public class Exercicio07 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        double celsius, fahrenheit;

        System.out.println("DIGITE A TEMPERATURA EM FAHRENHEIT: ");
        fahrenheit = read.nextDouble();

        celsius = ((fahrenheit - 32) *5)/9;

        System.out.printf("%.1f° Fahrenheit é %.1f° Celsius", fahrenheit, celsius);

        read.close();
    }
}
