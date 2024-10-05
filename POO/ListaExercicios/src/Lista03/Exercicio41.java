package Lista03;

import java.util.Scanner;

public class Exercicio41 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int idade;
        String continuar;

        do {
            System.out.println("Digite a idade do nadador: ");
            idade = read.nextInt();

            if(idade >= 5 && idade <=7){
                System.out.println("Categoria infantil A");
            }else if(idade >= 8 && idade <=11){
                System.out.println("Categoria infantil B");
            }else if(idade >= 12 && idade <=13){
                System.out.println("Categoria juvenil A");
            }else if(idade >= 14 && idade <=17){
                System.out.println("Categoria juvenil B");
            } else if (idade > 18) {
                System.out.println("Categoria Adulta");
            }

            System.out.println("Deseja continuar?[s/n]");
            continuar = read.next();
        }while(continuar.equals("s")||continuar.equals("S"));
    }
}
