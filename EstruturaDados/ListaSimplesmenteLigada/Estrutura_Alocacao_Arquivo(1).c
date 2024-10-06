/* Codigo com os exemplos vistos na aula sobre:
 * > Alocacao dinamica
 * > Estruturas (struct), ou seja, definicao de novo tipo
 * > Manipulacao de arquivos
 */

/*Bibliotecas utilizadas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Definicao das estruturas*/
/*Exemplo de criacao de uma estrutura sem typedef*/
struct aluno{
    char nome[30];
    int id;
    float notas[3];
};

/*Apos a criacao da estrutura e' possivel usar o typedef 
  para criar o novo tipo desejado, conforme o exemplo */
typedef struct aluno Aluno;

/*Exemplo de criacao de um novo tipo usando typedef*/
typedef struct{
    char nome[30];
} Professor;

int main(){
    /*Exemplo de abertura de um arquivo para leitura*/
    FILE *arquivo = fopen("arquivo.txt", "r");
    /*Exemplo de abertura de um arquivo para escrita*/
    //FILE *arquivo = fopen("arquivo.txt", "w");
    
    /*Exemplo de criacao de uma variavel do tipo struct aluno*/
    struct aluno a;

    /*Criacao de uma variavel do tipo ponteiro para Aluno*/
    Aluno *aluno;
    /*Criacao de uma variavel do tipo Professor, conforme foi
     definida na estrutura acima*/
    Professor professor;

    /*Exemplo para adicionar uma string na estrutura aluno*/
    strcpy(a.nome, "Pedro");
    /*Exemplo para adicionar um valor inteiro na struct aluno*/
    a.id = 90;
    /*Exemplo para adicionar um valor real no vetor da struct aluno*/
    a.notas[1] = 9.9;
    
    
    /*Ao criar um ponteiro para estrutura pode-se usar dinamicamente
      como no exemplo abaixo:*/
    aluno = (Aluno*) malloc(sizeof(Aluno)); 
    //O sizeof retorna um inteiro com a quantidade de bytes de um tipo 
    /*Verificando se a alocacao foi realizada, ou seja, se tem espaco*/
    if (aluno == NULL){
        printf("Erro na alocacao\n");
        return 1; //se nao tem espaco o programa finaliza
    }

    /*Agora usando um ponteiro para a estrutura, o operador sera -> */
    /*Exemplo para adicionar uma string na estrutura aluno*/
    strcpy(aluno->nome, "Carlos da Silva");
    /*Exemplo para adicionar um valor inteiro na struct aluno*/
    aluno->id = 91;
    /*Exemplo para adicionar um valor real no vetor da struct aluno*/
    aluno->notas[1] = 9.8;

    /*Apos todas as operacoes lembre-se de liberar o espaco alocado*/
    free(aluno);

    /*Exemplo de alocacao de um vetor de inteiros*/
    int *v = (int*) malloc(5*sizeof(int));
    
    /*Verificando se a alocacao foi realizada, ou seja, se tem espaco*/
    if (v == NULL){
        printf("Erro na alocacao\n");
        return 1;
    }
    /*Inicializando o vetor alocado*/
    int i;
    for(i = 0; i < 5; ++i){
        v[i] = i * 2;
    }

    /*Apresentado os vaolres do vetor alocado*/
    printf("Vetor alocado dinamicamente:\n");
    for(i = 0; i < 5; ++i){
        printf("%d ", v[i]);
    }
    printf("\n");

    /*Liberando o espaco em memoria do vetor apos seu uso*/
    free(v);
    
    /*verificado se o arquivo foi aberto corretamente*/
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1; //finaliza o programa, pois nao encontrou o arquivo
    }

    /*Para fazer leitura e escrita em arquivos usa-se fprintf e fscanf*/
    char texto[30] = "Escrevendo no arquivo";

    /*Para a escrita*/
    fprintf(arquivo, "Esse trecho sera escrito no arquivo: %s", texto);

    /*Para a leitura*/
    fscanf(arquivo, "%s", texto);

    /*Pode-se usar a saida do fscanf para pegar uma sequencia de dados,
      igual a 2, significa que dois inteiros foram lidos com sucesso */
    int n1, n2;
    while(fscanf(arquivo, "%d %d", &n1, &n2) == 2){ 
        printf("N1: %d N2: %d\n",n1, n2);
    }

    //fechando o arquivo 
    fclose(arquivo);

    return 0;
}