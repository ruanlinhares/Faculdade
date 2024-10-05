package Lista03;

public class Exercicio35 {
    public static void main(String[] args) {
        //repete i de 1 a 100
        for(int i = 1; i <= 100; i++){
            //se for multiplo de 10 imprima o número e escreva ao lado "Multiplo de 10"
            if(i % 10 == 0){
                System.out.println(i + " Multiplo de 10");
            }else{// se não imprima os outro números
                System.out.println(i);
            }
        }
    }
}
