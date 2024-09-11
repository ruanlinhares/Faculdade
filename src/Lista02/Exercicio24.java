package Lista02;


import java.util.Objects;
import java.util.Scanner;

public class Exercicio24 {
    public static void main(String[] args) {
        //Scanner que permite a entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis que vão armazenar nossos valores.
        int n1, n2, opcao;
        String escolha;

        //utilização de um loop para fechar o programa somente quando o usuario quiser.
        do {
            //interação com o usuario.
            System.out.println("Digite um número inteiro: ");
            n1 = read.nextInt();
            System.out.println("Digite outro número inteiro: ");
            n2 = read.nextInt();

            System.out.println("1 - Verificar se um dos números é ou não múltiplo do outro" +
            "\n2 - Verificar se os dois números são pares" + "\n3 - Verificar se a média dos dois números é maior ou igual a 7"+
            "\n4 - Sair");
            System.out.println("Escolha uma opção:");
            opcao = read.nextInt();

            switch(opcao){
                case 1:
                    //everificando se um número é multiplo de outro.
                    if(n1 % n2 == 0|| n2 % n1 ==0){
                        System.out.printf("%d é multiplo de %d\n", n1,n2);
                    }else{
                        System.out.printf("%d não é multiplo de %d\n", n1, n2);
                    }
                    break;
                case 2:
                    //Verificando se os números são pares.
                    if(n1 % 2 == 0 && n2 % 2 ==0){
                        System.out.println("Os dois números são pares");
                    }else if(n1 % 2 == 0 || n2 % 2 ==0){
                        System.out.println("Somente um dos números é par ");
                    }else{
                        System.out.println("Nenhum dos números é par");
                    }
                    break;
                case 3:
                    //verificação para saber se a media é igual ou esta acima de 7.
                    int media = (n1 * n2)/2;
                    if(media >7){
                        System.out.println("A média dos números é maior que 7");
                    }else if(media == 7){
                        System.out.println("A média dos números é igual a 7");
                    }else{
                        System.out.println("A média dos números é menor que 7");
                    }
                    break;
                case 4:
                    //comando para fechar o programa.
                    System.exit(0);
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }

            System.out.println("Deseja continuar?[s/n]");
            escolha = read.next();
        }while (Objects.equals(escolha,"s") || Objects.equals(escolha, "S"));


    }
}
