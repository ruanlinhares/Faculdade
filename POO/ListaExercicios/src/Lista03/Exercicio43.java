package Lista03;

public class Exercicio43 {
    public static void main(String[] args) {
        //NÃO FINALIZADO
        int total_grao = 0;
        int grao = 1;

        for(int i = 1; i < 64; i+=1 ){

            grao = grao * 2;

            total_grao = grao;
        }
        System.out.println("O monge vai receber " + total_grao + " grãos");
    }
}
