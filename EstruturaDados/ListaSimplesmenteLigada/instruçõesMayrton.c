/****************************************************************** 
 * Nome: Lista com vetores                                        *
 * Descricao: Implementacao de lista com uso de vetores (array).  *
 *            Esse codigo possui as principais operacoes da       *
 *            lista, como:                                        *
 *            criar lista,                                        *
 *            inserir elemento,                                   *
 *            remover elemento,                                   *
 *            buscar elemento,                                    *
 *            mostrar elementos,                                  *
 *            atualizar elementos,                                *
 *            excluir lista.                                      *
 * Autor: Mayrton Dias                                            *
 * Ultima alteracao: 18/09/2024                                   *
 ******************************************************************/

/*Include das bibliotecas*/ 
#include <stdio.h>
#include <stdlib.h>

/*Definicao das constantes*/ 
#define TAM 5

/*Definicao da estrutura*/ 
typedef struct{
    int id;
    int *elementos;
} Lista;

/*Funcoes implementadas*/
int atualizarElemento(Lista*, int, int);
int buscarElemento(Lista*, int);
Lista* criarLista();
Lista* excluirLista(Lista*);
void imprimirElementos(Lista*);
int inserirElemento(Lista*, int);
int inserirElementoID(Lista*, int, int);
int inserirElementoInicio(Lista*, int);
int removerElemento(Lista*, int);


int main(){
    /*Ponteiro usado para a criacao da lista*/
    Lista *lista = NULL;

    /*exemplo de chamada da funcoes*/
    lista = criarLista();
    
    imprimirElementos(lista);
    
    inserirElemento(lista, 5);
    inserirElemento(lista, 4);
    inserirElemento(lista, 1);
    inserirElemento(lista, 2);
    inserirElemento(lista, 7);
    inserirElemento(lista, 9);

    imprimirElementos(lista);

    removerElemento(lista, 4 );

    imprimirElementos(lista);

    int busca = buscarElemento(lista, 2);
    if(busca != -1){
        printf("Elemento: %d\n",lista->elementos[busca]);
    }else{
        printf("Elemento nao encontrado\n");
    }

    atualizarElemento(lista, 2, 6);
    imprimirElementos(lista);
    
    inserirElementoInicio(lista, 9);
    imprimirElementos(lista);
    
    inserirElementoID(lista, 7, 2);
    imprimirElementos(lista);

    lista = excluirLista(lista);
    imprimirElementos(lista);
    return 0;
}


/* Nome: atualizarElemento
 * Parametros: lista - ponteiro que possui o endereco lista
 *             busca - elemento que sera buscado na lista
 *             valor - novo valor do elemento que sera alterado 
 * Retorno: 1 - quando o valor e atualizado e 0 - caso contrario
 * Descricao: Funcao responsavel por atualizar um elemento
 *            da lista, caso o mesmo esteja na lista indicada
 */
int atualizarElemento(Lista *lista, int busca, int valor){
    int i;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }
    /*percorrendo todos os elementos presentes na lista*/
    for(i = 0; i < lista->id; ++i){
        /*condicao que verifica se o elemento da lista e igual a busca*/
        if(lista->elementos[i] == busca){
            /*atualizando o elemento*/
            lista->elementos[i] = valor;
            return 1;
        }
    }
    return 0;
}


/* Nome: buscarElemento
 * Parametro: lista - ponteiro que possui o endereco lista
 *            valor - elemento que sera buscado na lista
 * Retorno: o indice do elemento encontrado, -1 caso contrario
 * Descricao: Funcao criada para buscar um elemento na lista
 */
int buscarElemento(Lista *lista, int valor){
    int i, j;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }

    /*Percorrendo todos os elementos da lista*/
    for(i = 0; i < lista->id; ++i){
        /*Verificando se o elemento atual e igual ao valor buscado*/
        if(lista->elementos[i] == valor){
            return i;
        }
    }

    /*Retorna -1 caso nao encontre o valor desejado*/
    return -1;
}


/* Nome: criarLista
 * Parametro: void 
 * Retorno: endereco do espaco de memoria reservado pelo malloc
 * Descricao: Funcao responsavel pela criacao da lista e inicializacao
 *            do campo id e alocacao do vetor de elementos
 */
Lista* criarLista(){
    /*solicitando espaco para a lista*/
    Lista *nova = (Lista*)malloc(sizeof(Lista));

    /*Verificando se o espaco foi resevado*/
    if(nova == NULL){
        printf("Nao tem espaco\n");
        return NULL;
    }

    /*Preparando os dados iniciais da lista*/
    nova->id = 0; 
    nova->elementos = (int*)malloc(TAM*sizeof(int));
    
    /*Verificando se o espaco foi resevado*/
    if(nova->elementos == NULL){
        printf("Nao tem espaco\n");
        free(nova); //liberando o espaco de lista
        return NULL;
    }

    /*Retonando o espaco resevado*/
    return nova;
}


/* Nome: excluirLista
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: NULL para indicar que a lista foi excluida
 * Descricao: Funcao responsavel pela exclusao da lista
 */
Lista* excluirLista(Lista *lista){
    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return NULL;
    }

    /*Liberando o espaco que foi reservado para o vetor elementos*/
    free(lista->elementos);
    /*Liberando o espaco que foi reservado para a lista*/
    free(lista);
    return NULL;
}


/* Nome: imprimirElementos
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: void
 * Descricao: Funcao criada para apresentar todos elementos presentes na lista
 */
void imprimirElementos(Lista *lista){
    int i;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return ;
    }

    /*Verificando se a lista e vazia*/
    if(lista->id == 0){
        printf("Lista vazia\n");
        return ;
    }

    /*Mostrando cada elemento presente na lista*/
    for(i = 0; i < lista->id; ++i){
        printf("%d ", lista->elementos[i]);
    }
    printf("\n");
}


/* Nome: inserirElemento
 * Parametros: lista - ponteiro que possui o endereco lista
 *             valor - elemento que sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento no final da lista
 */
int inserirElemento(Lista *lista, int valor){
    
    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }
    
    /*Verificando se existe espaco para inserir mais um elemento na lista*/
    if(lista->id < TAM){
        /*Inserindo o valor na lista*/
        lista->elementos[lista->id] = valor;
        /*Atualizando a quantidade de elementos da lista*/
        ++(lista->id);
    }else{
        printf("Espaco esgotado\n");
        return 0;
    }

    return 1;
}


/* Nome: inserirElementoID
 * Parametros: lista - ponteiro que possui o endereco lista
 *             valor - elemento que sera adicionado na lista
 *             posicao - posicao que o elemento sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento na posicao indicada na lista
 */
int inserirElementoID(Lista *lista, int valor, int posicao){
    int i;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }

    /*Verificando se existe espaco para inserir mais um elemento na lista*/
    if(lista->id < TAM){
         /*Verificando se a posicao esta dentro do intervalo permitido*/
        if(posicao < lista->id){
            /*Deslocando os elementos apos posicao para o final da lista*/
            for(i = lista->id; i > posicao; --i){
                lista->elementos[i] = lista->elementos[i-1];
            }
            /*Inserindo o elemento na posicao indicada da lista*/
            lista->elementos[posicao] = valor;
            /*Atualizando a quantidade de elementos da lista*/
            ++(lista->id);
        }else{
            printf("Posicao fora o intervalo permitido\n");
        }
    }else{
        printf("Espaco esgotado\n");
        return 0;
    }

    return 1;
}


/* Nome: inserirElementoInicio
 * Parametros: lista - ponteiro que possui o endereco lista
 *             valor - elemento que sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento no inicio da lista
 */
int inserirElementoInicio(Lista *lista, int valor){
    int i;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }

    /*Verificando se existe espaco para inserir mais um elemento na lista*/
    if(lista->id < TAM){
        /*Deslocando todos os elementos para o final da lista*/
        for(i = lista->id; i > 0; --i){
            lista->elementos[i] = lista->elementos[i-1];
        }
        /*Inserindo o elemento na primeira posicao da lista*/
        lista->elementos[0] = valor;
        /*Atualizando a quantidade de elementos da lista*/
        ++(lista->id);
    }else{
        printf("Espaco esgotado\n");
        return 0;
    }

    return 1;
}


/* Nome: removerElemento
 * Parametro: lista - ponteiro que possui o endereco lista
 *            valor - elemento que sera removido da lista
 * Retorno: 1 se o elemento foi removido, 0 - caso contrario
 * Descricao: Funcao criada para remover um elemento da lista
 */
int removerElemento(Lista *lista, int valor){
    int i, j;

    /*Verificando se a lista foi criada*/
    if(lista == NULL){
        printf("A lista nao foi criada\n");
        return 0;
    }

    /*Percorre todos os elementos da lista*/
    for(i = 0; i < lista->id; ++i){
        /*Verificando se o elemento atual e igual ao valor que sera removido*/
        if(lista->elementos[i] == valor){
            /*Deslocando os elementos apos posicao do elemento que sera removido da lista*/
            for(j = i; j < lista->id-1; ++j){
                lista->elementos[j] = lista->elementos[j+1];
            }
            /*Atualizando a quantidade de elementos da lista*/
            --(lista->id);
            return 1;
        }
    }
    
    return 0;
}
