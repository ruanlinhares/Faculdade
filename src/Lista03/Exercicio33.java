package Lista03;

import java.util.Scanner;

public class Exercicio33 {
    public static void main(String[] args) {
        //Scanner para ler valores
        Scanner read = new Scanner (System.in);

        // nota armazena nota, somaNota armazena as notas recebidas, media faz a media das notas.
        double nota, somaNotas = 0, media;
        //para é a condição para o loop ficar rodando, qtd_aluno é o acumulador de alunos registrados.
        int parar = 0, qtd_aluno = 0;
        //loop para cadastrar notas e matriculas.
        while(parar == 0) {
            System.out.println("DIGITE SUA MATRICULA: ");
            int matricula = read.nextInt();
            System.out.println("DIGITE A SUA NOTA: ");
            nota = read.nextDouble();

            qtd_aluno = qtd_aluno + 1; //pega a iteração de cada loop para se basear quantos alunos registraram notas.
            somaNotas = somaNotas + nota;//pega as notas e acumula elas, para termos a sima de todas.

            System.out.println("Deseja parar?[1 - s/0 - n]");
            parar = read.nextInt();
        }

        media = somaNotas/ qtd_aluno; //divide as notas somadas pela a quantidade de alunos.
        System.out.printf("A quantidade de alunos da turma é %d e a média da turma é %.1f", qtd_aluno,media);
    }
}
