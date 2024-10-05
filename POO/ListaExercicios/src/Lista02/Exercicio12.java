package Lista02;

import java.util.Scanner;

public class Exercicio12 {
    public static void main(String[] args) {
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis n_int recebe o valor interiro
        int n_int, modulecalc;

        //Interação com o usuário, pedindo o valor para exibir seu módulo.
        System.out.println("Digite um valor inteiro: ");
        n_int = read.nextInt();

        //Verificação para ver se o número dado é positivo ou negativo.
        if (n_int >= 0 ){
            //se maior ou igual a 0 exibe o mesmo número guardado na var n_int.
            System.out.printf("O modulo de [%d] é %d",n_int, n_int);
        }else{
            //se não, no caso menor que zero, multiplicamos n_int por -1 para obter nosso módulo.
            modulecalc = n_int * (-1);
            System.out.printf("O modulo de [%d] é %d",n_int,modulecalc);
        }

        read.close();
    }
}
