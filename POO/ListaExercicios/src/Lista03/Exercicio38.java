package Lista03;

import java.util.Scanner;

public class Exercicio38 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        double N,E = 0;
        int C;
        String continuar;

        do {
            System.out.println("Digite seu código de trabalhador: ");
            C = read.nextInt();
            System.out.println("Digite quantas horas trabalhou: ");
            N = read.nextDouble();

            if(N > 50){
                E = (N-50) * 20;
                N = 50 * 10;
                System.out.printf("O trabalhador %d Recebe R$ %.2f bruto e R$ %.2f de hora extra\n",C,N,E);
            }else {
                N = N * 10;
                System.out.printf("O trabalhador %d Recebe R$ %.2f bruto e R$ %.2f de hora extra\n",C,N,E);
            }

            System.out.println("Deseja continuar?[s/n]");
            continuar = read.next();
        }while(continuar.equals("s")||continuar.equals("S"));
    }
}
