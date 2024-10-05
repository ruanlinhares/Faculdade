package Lista04;

import java.util.Random;
import java.util.Scanner;

public class Exercicio_string06 {

    //A função recombinação divide os códigos de genéticos digitados e os mescla criando duas novos códigos genéticos;
    public static void recombinacao(String s1, String s2){
        /*Primeiro a função sorteia um número aleatório, esse número vai estar no intervalo de números
        referentes ao tamanho das strings digitadas;*/
        Random random = new Random();
        int sortNumber = random.nextInt(s1.length());

        /*Quando número for gerado utilizaremos ele para criar um potonto de corte em cada string, fazemos isso duas
        vezes os caracteres depois do número sorteado e outra para os caracteres antes número sorteado assim dividimos
        cada string em 2 partes, s1 = 2 partes, s2 = 2 partes*/
        String primeiraRecombinacao = s1.substring(sortNumber);
        String segundaRecombinacao = s2.substring(sortNumber);
        String terceiraRecombinacao =  s1.substring(0,sortNumber);
        String quartaRecombinacao =  s2.substring(0,sortNumber);

        /*Aqui é onde acontece a sintetização das fitas de dna, pegamos uma parte de cada stirng dividida e as
        concatenamos*/
        String s3 = terceiraRecombinacao + segundaRecombinacao;
        String s4 = quartaRecombinacao + primeiraRecombinacao;

        //No final exibimos o resultado que são os novos indivíduos;
        System.out.printf("Indivíduo 3: %s\nIndivíduo 4: %s\n",s3,s4);
        //Aqui chamamos a função mutação e eu escolhi passar o individuo 3 como parametro para sofrer uma mutação;
        mutacao(s3);


    }
    public static void mutacao(String s3){
        /*Primeiro a função sorteia um número aleatório, esse número vai estar no intervalo de números
        referentes ao tamanho da string indicada;*/
        Random random = new Random();
        int sortNumber = random.nextInt(s3.length());

        //Fazemos isso novamente para obter um segundo número aleatório;
        int sortNumber2 = random.nextInt(s3.length());

        /*Aqui usamos o metodo charAt para escolher uma um caracter dentro da string indicada utilizando como referencia
        sua posição dentro da string, essa posição é definida pelo primeiro número que sorteamos, fazemos isso para
        definir o caracter que vai ser substituido*/
        String caracter = String.valueOf(s3.charAt(sortNumber));

        //Aqui acontece o mesmo do exemplo anterior só que procuramos o caracter que vai substitui-lo no código genético
        String randomLetter = String.valueOf(s3.charAt(sortNumber2));

        /*Comparamos se o antigo carater é diferente do primeiro, caso sim ele substitui o antigo caracter pelo novo
        caracter, caso o antigo caracter seja igual ao novo não ocorre mutação */
        if(!caracter.equals(randomLetter)) {
            String replace = s3.replaceFirst(caracter, randomLetter);
            System.out.printf("----------------------\nMUTAÇÃO DO INDIVÍDUO 3: %s", replace);
        }else{
            System.out.println("Nenhuma mutação ocorreu");
        }

    }
    public static void main(String[] args) {
        //Scanner para leitura de dados;
        Scanner read = new Scanner(System.in);

        //declaramos 2 variaveis para armazenar nossos dois códigos genéticos;
        String s1, s2;

        //Fazendo a interação com o usuário,pedindo os códigos genéticos;
        System.out.println("Digite um código genético: ");
        s1 = read.next();
        System.out.println("Digite outro código genético: ");
        s2 = read.next();

        /*Fazemos uma comparação para saber se os códigos genéticos tem o mesmo tamanho, se os tamanhos forem diferentes
        ele envia um aviso de erro, se forem iguais chamamos a função e exibimos os dados*/
        if(s1.length() != s2.length()){
            System.out.println("Seus dados genéticos tem que ter o mesmo tamanho");
        }else{
            System.out.printf("Indivíduo 1: %s \nIndivíduo 2: %s\n", s1,s2);
            recombinacao(s1,s2);
        }
        read.close();

    }
}
