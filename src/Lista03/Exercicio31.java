package Lista03;

import java.util.Scanner;

public class Exercicio31 {
    public static void main(String[] args) {
        //Scanner para a entrada de dados.
        Scanner read = new Scanner(System.in);

        //um vetor para armazenar os valores digitados.
        int [] numeros = new int[6];

        //esse for serve para capturar os valores e alocar eles no vetor.

        for(int i = 0; i < numeros.length; i+=1) {
            System.out.println("Digite um inteiro positivo:");
            numeros[i] = read.nextInt();
        }


        //esse for faz a verificação de cada número, se é par ou impar e exibe-os.
        for (int j = 0; j < numeros.length; j+=1){
            String parImpar = numeros[j] % 2 ==0?"par":"impar";
            System.out.println(numeros[j] +" "+ parImpar);
        }

        //atribuindo 0 aos acumuladores.
        int somaPar = 0;
        int somaImpar = 0;

        //esse for soma todos os valores pares e depois soma só os valores impares.
        int k = 0;
        while (k < numeros.length) {
            if (numeros[k] % 2 == 0) {
                somaPar = somaPar + numeros[k];
            }
            if(numeros[k] % 2 != 0){
                somaImpar = somaImpar + numeros[k];
            }
            k += 1;
        }
        System.out.printf("SOMA DOS PARES = %d", somaPar);
        System.out.printf("\nSOMA DOS ÍMPARES = %d", somaImpar);
    }
}
