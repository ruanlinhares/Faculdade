package Lista02;

import java.util.Objects;
import java.util.Scanner;

public class Exercicio20 {
    public static void main(String[] args) {
        //Scanner para a entrada de dados.
        Scanner read = new Scanner(System.in);

        //variaveis para armazenar nossos números
        int a, b, c;
        String continuar;

        //um loop para o usuario escolher quando deseja encerrar o programa.
        do {
            //interação com o usuario
            System.out.println("Digite um valor maior que zero: ");
            a = read.nextInt();
            System.out.println("Digite outro valor maior que zero: ");
            b = read.nextInt();
            System.out.println("Digite mais um valor maior que zero: ");
            c = read.nextInt();


            //verificação para saber se os numeros coletados de a,b e c são maiores que 0.
            if(a>0||b>0||c>0){
                //função Math.min e Math.max, para descobrir qual o menor e maior número inserido pelo usuário.
                int menor = Math.min(a,Math.min(b,c));
                int maior = Math.max(a,Math.max(b,c));

                System.out.println("O menor valor lido multiplicado pelo maior é: " + (menor *maior));
                System.out.println("O maior valor lido dividido pelo menor é: " + (maior / menor));
            }else{
                System.out.println("Valor digitado inválido");
            }

            System.out.println("Deseja continuar?");
            continuar = read.next();

        }while(Objects.equals(continuar, "s") || Objects.equals(continuar,"S"));

        read.close();
    }
}
