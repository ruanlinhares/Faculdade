package Lista03;

public class Exercicio28 {
    public static void main(String[] args) {

        //Declarado nosso contador
        int i;

        /*Esse loop vai imprimir todos os valores de i entre 100 e 200 que
        divididos por 2 tiverem resto diferente de 0*/
        for(i = 100; i <=200; i+=1){
            if(i % 2 != 0){
                System.out.println(i);
            }
        }
    }
}
