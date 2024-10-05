package Lista04;

import java.util.Arrays;
import java.util.Scanner;

public class Exercicio_string03 {
    public static void main(String[] args) {
        //Scanner para entradad de dados;
        Scanner read = new Scanner (System.in);

        //variavel que guarda nosso nome digitado;
        String nome;
        //vetor que guarda nossos nomes;
        String [] separate;
        //vetor que contem palavras invalidas para a abreviação;
        String [] notValid = {"e", "do", "da", "dos", "das", "de", "di", "du"};
        //cria um string builder para usarmos o metodo append;
        StringBuilder first_letter = new StringBuilder();

        //interação com o usuario para pedir seu nome;
        System.out.println("Digite seu nome completo: ");
        nome  = read.nextLine();

        //Quarda os nome no vetor repartindo ele onde há espaço vazio
        separate = nome.split(" ");

        //esse for-each percorre os elementos do vetor separate;
        for(String nomes: separate){
            //compara se o nome não é uma palavra inválida, além de deixa-las em minusculo para compara com o vetor;
            if(!Arrays.asList(notValid).contains(nomes.toLowerCase())){
                 //Pegamos o primerio caracter do primeiro elemento string do vetor separate, até seu ultimo elemento;
                 first_letter.append(nomes.charAt(0));
            }
        }
        //exibimos o nome e sua abreviação;
        System.out.printf("%s => %s",nome,first_letter.toString().toUpperCase());


        read.close();

    }
}
