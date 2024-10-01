package Lista04;


import java.util.Scanner;

public class Exercicio_string02 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int valor;
        String convert;

        System.out.println("Digite um valor inteiro: ");
        valor = read.nextInt();

        convert = String.valueOf(valor);

        for(int i = 0; i < convert.length(); i+=1){

            String pikvalue = String.valueOf(convert.charAt(i));

            switch (pikvalue){
                case "0":
                    System.out.println("Zero");
                    break;
                case "1":
                    System.out.println("Um");
                    break;
                case "2":
                    System.out.println("Dois");
                    break;
                case "3":
                    System.out.println("Três");
                    break;
                case "4":
                    System.out.println("Quatro");
                    break;
                case "5":
                    System.out.println("Cinco");
                    break;
                case "6":
                    System.out.println("Seis");
                    break;
                case "7":
                    System.out.println("Sete");
                    break;
                case "8":
                    System.out.println("Oito");
                    break;
                case "9":
                    System.out.println("Nove");
                    break;
                default:
                    System.out.println(" ");
                    break;

            }
        }

    }
}
