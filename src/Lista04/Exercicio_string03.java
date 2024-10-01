package Lista04;

import java.util.Scanner;

public class Exercicio_string03 {
    public static void main(String[] args) {
        Scanner read = new Scanner (System.in);

        String  nome;
        String [] prep = {"e","do","da","dos","das","de","di,","du"};

        System.out.println("Digite seu nome: ");
        nome  = read.nextLine();

        String [] separete = nome.split(" ");

        for (String letras : separete){

        }


    }
}
