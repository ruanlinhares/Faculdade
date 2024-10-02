package Lista04;

import java.util.Arrays;
import java.util.Scanner;

public class Exercicio_string03 {
    public static void main(String[] args) {
        Scanner read = new Scanner (System.in);

        String nome;
        String [] separate;
        String [] notValid = {"e", "do", "da", "dos", "das", "de", "di", "du"};
        StringBuilder first_letter = new StringBuilder();

        System.out.println("Digite seu nome completo: ");
        nome  = read.nextLine();

        separate = nome.split(" ");


        for(String nomes: separate){
            if(!Arrays.asList(notValid).contains(nomes.toLowerCase())){
                 first_letter.append(nomes.charAt(0));
            }
        }
        System.out.printf("%s => %s",nome,first_letter.toString().toUpperCase());


        read.close();

    }
}
