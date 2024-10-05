package Lista04;


import java.util.Scanner;

public class Exercicio_string02 {
    public static void main(String[] args) {
        //Scanner para entrada de dados;
        Scanner read = new Scanner(System.in);

        //declarando variaveis;
        int valor;
        String convert;

        //interação com o usuário;
        System.out.println("Digite um valor inteiro: ");
        valor = read.nextInt();

        //conversão do valor int em string;
        convert = String.valueOf(valor);

        // o for percorre os caracteres de convert;
        for(int i = 0; i < convert.length(); i+=1){

            //cada char será comparado no switch;
            String pikvalue = String.valueOf(convert.charAt(i));

            //caso o valor esteja no switch seta escrito por extenso;
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
                    System.out.println("Erro: valor fora da condicional");
                    break;

            }
        }

        read.close();

    }
}
