package Lista03;

import java.util.Scanner;

public class Exercicio40 {
    public static void main(String[] args) {
        //Scanner para a entradad de dados
        Scanner read = new Scanner (System.in);

        double poluicao;
        String continuar;

        do {
            System.out.println("Digite o grau de poluição: ");
            poluicao = read.nextDouble();

            if(poluicao < 0.25){
                System.out.println("Nivel de poluição aceitável");
            }else if(poluicao > 0.25 && poluicao <=0.3){
                System.out.println("ALERTA!!! Suspensão de atividades das indústrias do grupo 1°");
            }else if(poluicao > 0.3 && poluicao <= 0.4){
                System.out.println("ALERTA!!! Suspensão de atividades das indústrias do grupo 1° e 2°");
            }else if(poluicao >= 0.5 ){
                System.out.println("ALERTA!!! Suspensão das atividades de todas as indústrias");
            }

            System.out.println("Deseja continuar? [s/n]");
            continuar = read.next();
        }while(continuar.equals("S")||continuar.equals("s"));
    }
}
