package Lista02;

import java.util.Scanner;

public class Exercicio17 {
    public static void main(String[] args){
        //Scanner para entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variavel que guarda o número inteiro.
        int n;

        //Interação com o usuário.
        System.out.println("Digite um número entre 0 e 9 : ");
        n = read.nextInt();

        //verifica se o número esta dentro do intervalo.
        String mensagem = n >=0 && n <=9
                ?"Valor Válido"
                :"Valor inválido";

        System.out.println(mensagem);

        read.close();
    }
}
