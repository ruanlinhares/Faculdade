package Lista04;

import java.util.Scanner;

public class Exercicio_string05 {
    public static void main (String[] args){
        //Scanner para entrada de dados;
        Scanner read = new Scanner(System.in);

        //declaração de variaveis;
        String texto, resposta;

        //interação com o usuário;
        System.out.println("Digite um texto: ");
        texto = read.nextLine();

        //substitui qualquer espaço entre os texto que seja maior que um por somente 1 espaço;
        String remove = texto.trim().replaceAll("\\s+", " ");

        //exibe o texto sem espaços adicionais;
        System.out.println(remove);

        read.close();

    }
}
