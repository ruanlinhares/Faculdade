package Lista01;

import java.util.Scanner;

public class Exercicio06 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        double celsius, fahrenheit;

        System.out.println("DIGITE A TEMPERATURA EM CELSIUS: ");
        celsius = read.nextDouble();

        fahrenheit = ((9 * celsius)+160)/5;

        System.out.printf("%.1f° celsius é %.1f° em Fahrenheit", celsius,fahrenheit);

        read.close();
    }
}
