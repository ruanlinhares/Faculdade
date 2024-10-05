package Lista01;

import java.util.Scanner;

public class Exercicio03 {
    public static void main(String[] args){
        //EXERCÍCÍO 03
        Scanner read = new Scanner(System.in);

        int  cod_peca, qt_vendida;
        double vl_peca, comissao;
        String nm_vendedor;

        System.out.print("DIGITE SEU NOME: ");
        nm_vendedor = read.next();
        System.out.print("DIGITE O CÓDIGO DA PEÇA: ");
        cod_peca = read.nextInt();
        System.out.print("DIGITE O VALOR DO ITEM: ");
        vl_peca = read.nextDouble();
        System.out.print("DIGITE O QUANTIDADE VENDIDA: ");
        qt_vendida = read.nextInt();

        comissao = ((vl_peca * qt_vendida)*5)/100;

        System.out.println("===========================");
        System.out.println("VENDEDOR: " + nm_vendedor +
                           "\nIDENTIFICAÇÃO DA PEÇA: " + cod_peca +
                           "\nVALOR DA PEÇA: R$" + vl_peca +
                           "\nQUANTIDADE DE ITENS: " + qt_vendida);
        System.out.printf("COMISSÃO RECEBIDA: R$ %.2f\n", comissao);
        System.out.println("===========================");

        read.close();
    }
}
