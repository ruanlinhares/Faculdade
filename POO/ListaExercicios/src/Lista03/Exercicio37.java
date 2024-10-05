package Lista03;

import java.util.Scanner;

public class Exercicio37 {
    public static void main(String[] args) {
        //entrada de dados
        Scanner read = new Scanner(System.in);
        //armazena nossos numeros para operação
        double n1, n2;
        //armazena nossa escolha no menu
        int escolha;
        //armazena nossa escolha de continuar rodando o programa
        String continuar;

        //executa nosso menu uma primeira vez e se cumprir a condição executa um loop;
        do {
            //interação com o usuario para escolha de uma operação
            System.out.println("OPERAÇÕES");
            System.out.println("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
            System.out.println("EScolha uma opção: ");
            escolha = read.nextInt();

            switch (escolha){
                //operação de soma
                case 1:
                    System.out.println("Digite um número: ");
                    n1 = read.nextDouble();
                    System.out.println("Digite outro número: ");
                    n2 = read.nextDouble();

                    System.out.println("A soma resulta em " + (n1 +n2));
                    break;
                //operação de subtração
                case 2:
                    System.out.println("Digite um número: ");
                    n1 = read.nextDouble();
                    System.out.println("Digite outro número: ");
                    n2 = read.nextDouble();

                    System.out.println("A subtraçãor resulta em " + (n1 - n2));
                    break;
                //operação de multiplicação
                case 3:
                    System.out.println("Digite um número: ");
                    n1 = read.nextDouble();
                    System.out.println("Digite outro número: ");
                    n2 = read.nextDouble();

                    System.out.println("A multiplicação resulta em " + (n1 * n2));
                    break;
                //operação de divisão
                case 4:
                    System.out.println("Digite um número: ");
                    n1 = read.nextDouble();
                    System.out.println("Digite outro número: ");
                    n2 = read.nextDouble();

                    System.out.println("A divisão resulta em " + (n1 / n2));
                    break;
                // um default caso a entrada não estiver presente no switch.
                default:
                    System.out.println("Opção inválida!!!");
                    break;
            }
            //interação perguntando se que continuar o programa.
            System.out.println("Deseja continuar?[s/n]");
            continuar = read.next();

        }while(continuar.equals("s")||continuar.equals("S"));

        read.close();
    }
}
