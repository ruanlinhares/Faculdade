package Lista04;

import java.util.Scanner;
import java.lang.String;
public class Exercicio_string01 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int vogal_qtd = 0, digito_qtd=0;
        String palavra, vogal;

        System.out.println("Digite uma palavra: ");
        palavra = read.next().toUpperCase();

        for (int i = 0; i < palavra.length(); i++) {
            vogal = String.valueOf(palavra.charAt(i));
            if(vogal.equalsIgnoreCase("a")||vogal.equalsIgnoreCase("e")||vogal.equalsIgnoreCase("i")||vogal.equalsIgnoreCase("o")||vogal.equalsIgnoreCase("u")){
                vogal_qtd+=1;
            }
        }

        if(palavra.startsWith("UNI")){
            System.out.println("Começa com \"UNI\"");
        } else{
            System.out.println("Não começa com \"UNI\"");
        }

        if(palavra.endsWith("RIO")){
            System.out.println("Termina com \"RIO\"");
        }else{
            System.out.println("Não termina com \"RIO\"");
        }

        for (int i = 0; i < palavra.length(); i++) {
            String digito_num = String.valueOf(palavra.charAt(i));
            if(digito_num.equals("0")||digito_num.equals("1")||digito_num.equals("2")||digito_num.equals("3")||digito_num.equals("4")
                    ||digito_num.equals("5")||digito_num.equals("6")||digito_num.equals("7")||digito_num.equals("8")||digito_num.equals("9")){
                digito_qtd+=1;
            }
        }

        StringBuilder reverse = new StringBuilder(palavra);
        String pali = reverse.reverse().toString();

        if(pali.contentEquals(palavra)){
            System.out.println("É um palíndromo");
        }else{
            System.out.println("Não é um palíndromo");
        }

        System.out.println("O número de caracteres é: " + palavra.length());
        System.out.printf("A palavra %s em maiúsculo é: %s\n", palavra, palavra.toUpperCase());
        System.out.printf("A palvra tem %s vogal/vogais\n", vogal_qtd);
        System.out.printf("A palavra tem %d digitos\n", digito_qtd);
    }
}
