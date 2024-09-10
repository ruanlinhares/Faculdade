package Lista02;

import java.util.Scanner;

public class Exercicio20 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int a, b, c;
        String continuar = null;

        do {
            System.out.println("Digite um valor maior que 0:");
            a = read.nextInt();
            System.out.println("Digite um valor maior que 0:");
            b = read.nextInt();
            System.out.println("Digite um valor maior que 0:");
            c = read.nextInt();

            if (a>0||b>0||c>0){
                if(a > b && b > c){
                    int multi = c * a;
                    int div = a/c;
                } else if (c > b && b > a) {
                    int multi2 = a * c ;
                    int div2 = c/a;
                }else if (b>a && a>c){
                    int multi3 = c * b;
                    int div3 = b/c;
                }else if (b>c && c>a){
                    int multi4 = a * b;
                    int div4 = b/a;
                }
            }


            System.out.println("Valor inválido");
            System.out.println("Deseja continuar?");
            continuar = read.next();

        }while(continuar == "S"|| continuar =="s");
    }
}
