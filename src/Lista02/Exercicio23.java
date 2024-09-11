package Lista02;

import java.util.Objects;
import java.util.Scanner;

public class Exercicio23 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        int escolha;
        double n1,n2;
        String resposta;

        do {
            System.out.println("Digite um número: ");
            n1 = read.nextDouble();
            System.out.println("Digite outro número: ");
            n2 = read.nextDouble();

            System.out.println("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
            System.out.println("Escolha uma operação: ");
            escolha = read.nextInt();


            switch (escolha){
                case 1:
                    double soma = n1 + n2;
                    System.out.println(soma);
                    break;
                case 2:
                    double subtracao = n1 - n2;
                    System.out.println(subtracao);
                    break;
                case 3:
                    double multi = n1 * n2;
                    System.out.println(multi);
                    break;
                case 4:
                    double div = n1 / n2;
                    System.out.println(div);
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }

            System.out.println("Deseja continuar?[s/n]");
            resposta = read.next();
        }while(Objects.equals(resposta, "S") || Objects.equals(resposta, "s"));


    }
}
