package Lista04;

import java.util.Scanner;
import java.lang.String;
public class Exercicio_string01 {
    public static void main(String[] args){
        //Scanner para entrada de dados;
        Scanner read = new Scanner(System.in);

        //declaração de variaveis;
        int vogal_qtd = 0, digito_qtd=0;
        String palavra, vogal;

        //interação com o usuário
        System.out.println("Digite uma palavra: ");
        //palavara trasformada em maiúsculo para comparar com "UNI" E "RIO";
        palavra = read.next().toUpperCase();

        //esse for percorre a string digitada;
        for (int i = 0; i < palavra.length(); i++) {
            //aqui pegamos cada caracter da string;
            vogal = String.valueOf(palavra.charAt(i));
            //caso o caracter seja uma das vogais dentro da condição é adicionado 1 no contador;
            if(vogal.equalsIgnoreCase("a")||vogal.equalsIgnoreCase("e")||vogal.equalsIgnoreCase("i")||vogal.equalsIgnoreCase("o")||vogal.equalsIgnoreCase("u")){
                vogal_qtd+=1;
            }
        }

        //comparamos se a palavra começa com "UNI";
        if(palavra.startsWith("UNI")){
            System.out.println("Começa com \"UNI\"");
        } else{
            System.out.println("Não começa com \"UNI\"");
        }

        //comparamos se a palavra termina com "RIO";
        if(palavra.endsWith("RIO")){
            System.out.println("Termina com \"RIO\"");
        }else{
            System.out.println("Não termina com \"RIO\"");
        }

        //Esse for percorre a string digitada
        for (int i = 0; i < palavra.length(); i++) {
            //pega cada caracter da string;
            String digito_num = String.valueOf(palavra.charAt(i));
            //campara para ver se algum número foi digitado, se sim é adicionado 1 no contador;
            if(digito_num.equals("0")||digito_num.equals("1")||digito_num.equals("2")||digito_num.equals("3")||digito_num.equals("4")
                    ||digito_num.equals("5")||digito_num.equals("6")||digito_num.equals("7")||digito_num.equals("8")||digito_num.equals("9")){
                digito_qtd+=1;
            }
        }

        //cria um stingBuilder com palavra como parametro;
        StringBuilder reverse = new StringBuilder(palavra);
        //pega nossa palavra digitada e inverte e representa textualmente ele essa palavra invertida;
        String pali = reverse.reverse().toString();

        //comparamos para saber se a palavra invertida é igual a palavra que o usuario digitou, se sim é um palindromo;
        if(pali.contentEquals(palavra)){
            System.out.println("É um palíndromo");
        }else{
            System.out.println("Não é um palíndromo");
        }

        //exibe o resultado de nossas operações;
        System.out.println("O número de caracteres é: " + palavra.length());
        System.out.printf("A palavra %s em maiúsculo é: %s\n", palavra, palavra.toUpperCase());
        System.out.printf("A palvra tem %s vogal/vogais\n", vogal_qtd);
        System.out.printf("A palavra tem %d digitos\n", digito_qtd);

        read.close();
    }
}
