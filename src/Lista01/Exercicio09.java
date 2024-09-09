package Lista01;

import java.util.Scanner;

public class Exercicio09 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        int dia_idade, mes_idade, ano_idad;


        System.out.println("INSIRA SUA QUANTOS ANOS VOCÊ TEM: ");
        ano_idad = read.nextInt();
        System.out.println("INSIRA EM QUE MÊS ESTAMOS NESSE ANO: ");
        mes_idade = read.nextInt();
        System.out.println("INSIRA O DIA DO MÊS CORRENTE: ");
        dia_idade = read.nextInt();

        int anoCalc = ano_idad * 365;
        int mesCalc = mes_idade * 30;
        int somatorio = anoCalc + mesCalc + dia_idade;

        System.out.printf("%d anos, %d meses e %d dias são %d dias, convertidos somente em dias.",
                          ano_idad,mes_idade,dia_idade,somatorio);

        read.close();

    }
}
