package Lista02;

import java.util.Scanner;

public class Exercicio22 {
    public static void main(String[] args){
        //Scanner que permite a entrada de dados no sistema.
        Scanner read = new Scanner(System.in);

        //variavel que guarda o valor dado pelo usuario
        double numero;

        //interação com o usuario.
        System.out.println("Digite um número: ");
        numero = read.nextDouble();

        //verificação se é positivo ou negativo, guardando nas respectivas variaveis.
        if(numero > 0){
            double letraA = numero;
            System.out.printf("O valor %.1f foi armazenado na variável A",letraA);
        }else if(numero < 0 ){
            double letraB = numero;
            System.out.printf("O valor %.1f foi armazenado na variável B",letraB);
        }

        read.close();

    }
}
