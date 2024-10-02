package Lista04;

import java.util.Scanner;

public class Exercicio_string04 {
    public static void main (String[] args){
        Scanner read = new Scanner(System.in);

        String texto;
        String [] palavras;
        int caracteres, palavra =0;

        System.out.println("Digite um texto: ");
        texto = read.nextLine();

        caracteres = texto.length();

        palavras = texto.split(" ");

        for(int i = 0; i < palavras.length; i+=1){
            palavra+=1;
        }


        System.out.printf("o texto tem %d caracteres\n", caracteres);
        System.out.printf("O texto tem %d palavras", palavra);

        read.close();
    }
}
