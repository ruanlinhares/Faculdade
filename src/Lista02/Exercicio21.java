package Lista02;

import java.util.Scanner;

public class Exercicio21 {
    public static void main(String[] args){
        //Scanner que permite a entrada de dados.
        Scanner read = new Scanner(System.in);

        //variavel de armazenamento.
        int numero;

        //interação com o usuario
        System.out.println("Digite um número inteiro: ");
        numero = read.nextInt();

        //verifica se o número é maior ou menor que 0 para dizer se é positivo ou negativo.
        if (numero > 0){
            System.out.println("Este número é positivo");
        }else if(numero < 0){
            System.out.println("Este é um numero negativo");
        }else{
            System.out.println("Este é um número neutro");
        }

        read.close();
    }
}
