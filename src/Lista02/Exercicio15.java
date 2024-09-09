package Lista02;

import java.util.Scanner;

public class Exercicio15 {
    public static void main(String[] args) {
        //Nosso scanner que permite entrada de dados.
        Scanner read = new Scanner(System.in);

        //Variáveis para armazenar nossas notas.
        double nota1, nota2, nota3, nota4;

        //Interação com o usuário, pedindo as notas para o cálculo da média.
        System.out.println("Digite a primeira nota: ");
        nota1 = read.nextDouble();
        System.out.println("Digite a segunta nota: ");
        nota2 = read.nextDouble();
        System.out.println("Digite a terceira nota: ");
        nota3 = read.nextDouble();
        System.out.println("Digite a quarta nota: ");
        nota4 = read.nextDouble();

        //Cálculo da média
        double media = (nota1+nota2+nota3+nota4)/4;

        //verificação da média.
        if(media >= 7){
            System.out.printf("ALUNO APROVADO, MÉDIA: %.1f", media);
        }else {
            System.out.println("ALUNO NA PROVA FINAL");
            //pedindo valor da recuperação.
            System.out.println("Digite a nota da prova de recuperação: ");
            double recuperacao = read.nextDouble();

            //cálculo na nova média
            double nova_media = (recuperacao + media)/2;

            /*condição com operação ternária para verificar aprovação
            ou reprovação na recuperação*/
            String mensagem = nova_media >= 7
                    ? "APROVADO NA RECUPERAÇÃO"
                    : "REPROVADO NA RECUPERAÇÃO";

            System.out.printf("%s, MÉDIA : %.1f", mensagem, nova_media);
        }

        read.close();
    }
}
