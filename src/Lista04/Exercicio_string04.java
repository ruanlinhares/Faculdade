package Lista04;

import java.util.Scanner;

public class Exercicio_string04 {
    public static void main (String[] args){
        //Scanner para entrada de dados;
        Scanner read = new Scanner(System.in);

        //variavel que armazena nooso texto;
        String texto;
        //vetor que guarda as palavras;
        String [] palavras;
        //variaveis para guarda qtd de palavras e caracteres;
        int caracteres, palavra =0;

        //interação com o usuário para pedir um texto;
        System.out.println("Digite um texto: ");
        texto = read.nextLine();

        //o tamanho de caracteres no texto é guardado na variavel caracter;
        caracteres = texto.length();

        //usamos o split para separar cada palavra e coloca-las em um vetor
        palavras = texto.split(" ");

        /*utilizamos um for para contar quantos elementos esse vetor de palavras tem,
        já que cada palavra é um elemento, a quantidades de elementos do vetor é o nosso
        número de palavras*/
        for(int i = 0; i < palavras.length; i+=1){
            palavra+=1;
        }

        //exibe o número de caracteres e o número de palavras;
        System.out.printf("o texto tem %d caracteres\n", caracteres);
        System.out.printf("O texto tem %d palavras", palavra);

        read.close();
    }
}
