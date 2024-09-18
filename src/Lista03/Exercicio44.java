package Lista03;

import java.util.Scanner;

public class Exercicio44 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int escolha;
        double altura, peso, fahrenheit, celsius;
        String continuar;

        do {
            System.out.println("1 – Conversão de Graus Celsius em Graus Fahrenheit\n"
                    + "2 – Conversão de Graus Fahrenheit em Graus Celsius\n"
                    + "3 – Peso ideal do homem\n" + "4 – Peso ideal da mulher");
            System.out.println("Escolha uma opção:");
            escolha = read.nextInt();

            switch(escolha){
                case 1:
                    System.out.println("DIGITE A TEMPERATURA EM CELSIUS: ");
                    celsius = read.nextDouble();

                    fahrenheit = ((9 * celsius)+160)/5;

                    System.out.printf("%.1f° celsius é %.1f° em Fahrenheit\n", celsius,fahrenheit);
                    break;
                case 2:
                    System.out.println("DIGITE A TEMPERATURA EM FAHRENHEIT: ");
                    fahrenheit = read.nextDouble();

                    celsius = ((fahrenheit - 32) *5)/9;

                    System.out.printf("%.1f° Fahrenheit é %.1f° Celsius\n", fahrenheit, celsius);
                    break;
                case 3:
                    System.out.println("Qual a sua altura?");
                    altura = read.nextDouble();
                    System.out.println("Qual seu peso?");
                    peso = read.nextDouble();

                    double calcMen = (72.7*altura)-58;
                    double imc = peso / Math.pow(altura,2);
                    String ideal  =  imc < 25 && imc > 17? "Peso normal":"Peso fora do padrão";

                    System.out.printf("Seu peso ideal é %.1f Kg e seu atual %s\n",calcMen,ideal);
                    break;
                case 4:
                    System.out.println("Qual a sua altura?");
                    altura = read.nextDouble();
                    System.out.println("Qual seu peso?");
                    peso = read.nextDouble();

                    double calcWoman = (62.1*altura) - 44.7;
                    double imc2 = peso / Math.pow(altura,2);
                    String ideal2  =  imc2 < 25 && imc2 > 17? "Peso normal":"Peso fora do padrão";
                    System.out.printf("Seu peso ideal é %.1f Kg e seu atual %S", calcWoman,ideal2);
                    break;
                default:
                    System.out.println("Opção inválida!!!");
            }

            System.out.println("Deseja continuar?[s/n]");
            continuar = read.next();
        }while(continuar.equals("S")||continuar.equals("s"));
    }
}
