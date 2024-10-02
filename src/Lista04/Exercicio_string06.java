package Lista04;

import java.util.Random;
import java.util.Scanner;

public class Exercicio_string06 {

    public String recombinacao(String s1, String s2){
        if(s1.length() != s2.length()){
            System.out.println("Seus dados genéticos tem que ter o mesmo tamanho");
        }else{
            Random random = new Random();
            int sortNumber = random.nextInt(s1.length());
            //...
        }


    }
    public String mutacao(){
        //...
    }
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        String s1, s2, s3, s4;

        System.out.println("Digite um código genético: ");
        s1 = read.next();
        System.out.println("Digite outro código genético: ");
        s2 = read.next();

        //...

    }
}
