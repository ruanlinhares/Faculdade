package Lista02;

import java.util.Objects;
import java.util.Scanner;

public class Exercicio23 {
    public static void main(String[] args){
        //scanner para a entrada de dados.
        Scanner read = new Scanner(System.in);

        //variaveis para armazenamento dos nossos dados;
        int escolha;
        double n1,n2;
        String resposta;

        //um loop para que o usuario escolha quando quer fechar o programa.
        do {
            //interação com o usuario.
            System.out.println("Digite um número: ");
            n1 = read.nextDouble();
            System.out.println("Digite outro número: ");
            n2 = read.nextDouble();

            //o menu de escolhas
            System.out.println("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
            System.out.println("Escolha uma operação: ");
            escolha = read.nextInt();

            //Usando um switch para decidir operalçao que o usuario quer fazer com os numeros digitados.
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

            //recolhendo respsota para fechar ou continuar o loop.
            System.out.println("Deseja continuar?[s/n]");
            resposta = read.next();
        }while(Objects.equals(resposta, "S") || Objects.equals(resposta, "s"));

        read.close();


    }
}
