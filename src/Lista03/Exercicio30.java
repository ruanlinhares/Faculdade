package Lista03;

import java.util.Scanner;

public class Exercicio30 {
    public static void main(String[] args) {
        //Scanner para a entrada de dados
        Scanner read = new Scanner(System.in);

        //variavel que armazena o valor da tabuada
        int valor;

        //interação com o usuário pedindo o valor da tabuada
        System.out.println("Digite um número para saber sua tabuada:");
        valor = read.nextInt();

        /*Aqui fazemos um for de 0 a 10 multiplicando o valor escolhido pelo usuario
        por cada valor de 0 a 10 e exibindo o calculo ao lado*/
        for(int i = 0; i <= 10; i+=1){
            System.out.printf("%d x %d = %d\n", valor, i, (valor * i));
        }
    }
}
