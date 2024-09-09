package Lista02;

import java.util.Scanner;

public class Exercicio14 {
    public static void main(String[] args) {
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis n1,n2
        double n1, n2;

        //Interação com o usuário, pedindo o valores para dizer a diferença
        System.out.println("Digite um número: ");
        n1 = read.nextInt();
        System.out.println("Digite outro número: ");
        n2 = read.nextInt();

        /* Fazendo a verificação para sempre o menor valor subtrair
        do menor, sempre obtendo uma diferença positiva*/
        if(n1 < n2){
            double op = n2 - n1;
            System.out.printf("A diferença de %.1f - %.1f é de %.1f",n1,n2,op);
        }else{
            double op2 = n1 - n2;
            System.out.printf("A diferença de %.1f - %.1f é de %.1f",n1,n2,op2);
        }

        read.close();
    }
}
