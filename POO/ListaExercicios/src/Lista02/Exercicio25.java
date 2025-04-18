package Lista02;

import java.util.Scanner;

public class Exercicio25 {
    public static void main(String[] args) {
        //scanner permite a entrada de dados
        Scanner read = new Scanner(System.in);

        //variaveis para armazenar nossos dados.
        double altura;
        int sexo;

        //menu de escolhas.
        System.out.println("CÁLCULE SEU PESO IDEAL");
        System.out.println("1 - Mulher\n2 - Homem");
        System.out.println("Escolha seu gênero: ");
        sexo = read.nextInt();

        //switch para decidir se vai ecolher o calculo masculino ou feminino.
        switch(sexo){
            case 1:
                System.out.println("Qual a sua altura?");
                altura = read.nextDouble();
                double calcWoman = (62.1*altura) - 44.7;
                System.out.printf("Seu peso ideal é %.1f Kg", calcWoman);
                break;
            case 2:
                System.out.println("Qual a sua altura?");
                altura = read.nextDouble();
                double calcMen = (72.7*altura)-58;
                System.out.printf("Seu peso ideal é %.1f Kg",calcMen);
                break;
            default:
                System.out.println("Opção inválida");
                break;
        }
        read.close();
    }
}
