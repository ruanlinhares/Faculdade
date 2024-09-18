package Lista03;

import java.util.Scanner;

public class Exercicio33 {
    public static void main(String[] args) {
        Scanner read = new Scanner (System.in);

        int qtdAlunos=0, matricula;
        double nota, somaNota=0, media;
        String continuar= "s";

        while(continuar.equals("s")){
            System.out.println("Digite sua matricula: ");
            matricula = read.nextInt();
            System.out.println("Digite sua nota: ");
            nota = read.nextDouble();

            qtdAlunos += 1;

            somaNota = somaNota + nota;
            System.out.println("Quer continuar?[s/n]");
            continuar = read.next();
        }
        media = somaNota/qtdAlunos;
        System.out.printf("O número de alunos na turma é %d e a média das sua provas é %.1f", qtdAlunos,media);

        read.close();
    }
}
