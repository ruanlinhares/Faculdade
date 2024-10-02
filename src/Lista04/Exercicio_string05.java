package Lista04;

import java.util.Scanner;

public class Exercicio_string05 {
    public static void main (String[] args){
        Scanner read = new Scanner(System.in);

        String texto, resposta;

        System.out.println("Digite um texto: ");
        texto = read.nextLine();

        String remove = texto.trim().replaceAll("\\s+", " ");

        System.out.println(remove);

        read.close();

    }
}
