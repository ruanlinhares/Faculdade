//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Estruturas
typedef struct FilaNo filaNo;

typedef struct
{
	int cod_moto;
	char marca[20];
	char modelo[20];
	char cor;
	int cilindrada;
	char partida;
	char alimentacao;
	float capacidade_carga;
	float preco;
} Motocicleta;

typedef struct
{
	filaNo *inicio;
	filaNo *fim;
} Fila;

struct FilaNo
{
	Motocicleta novaMoto;
	filaNo *prox;
};

//Declarando funções
Fila *criarFila();
int imprimirElementos(Fila *);
int enqueue(Fila *, Motocicleta);
int dequeue(Fila *);
Fila * excluirFila(Fila*);

//Função main
int main ()
{
	int opc;
	char continuar = 's';
	Motocicleta novaMoto;


	Fila *fila = NULL;

	do
	{
		printf("========MOTOROAD========");
		printf("\n1 - Criar Lista");
		printf("\n2 - Inserir moto");
		printf("\n3 - inserir moto em uma posição na lista");
		printf("\n4 - inserir moto no topo da lista");
		printf("\n5 - Imprimir Lista de motos");
		printf("\n11 - Salvar dados do programa");
		printf("\n12 - carregar dados exitentes");



		printf("\n");
		printf("\nEscolha uma opção: ");
		scanf(" %d", &opc);

		switch(opc)
		{
		case 1:

			fila = criarLista();
			break;

		case 2:

			printf("\nInsira o código: ");
			scanf(" %d", &novaMoto.cod_moto);
			getchar();
			printf("\nInsira a marca: ");
			fgets(novaMoto.marca, 20, stdin);
			printf("\nInsira o modelo: ");
			fgets(novaMoto.modelo, 20, stdin);
			printf("\nInsira o cor: ");
			scanf("%s", &novaMoto.cor);
			printf("\nInsira o cilindrada: ");
			scanf("%d", &novaMoto.cilindrada);
			printf("\nInsira o partida: ");
			scanf(" %c", &novaMoto.partida);
			printf("\nInsira o alimentação: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preço: ");
			scanf("%f", &novaMoto.preco);

			inserirElemento(fila, novaMoto);

			break;

		case 4:

			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
			getchar();
			printf("\nInsira a marca: ");
			fgets(novaMoto.marca, 20, stdin);
			printf("\nInsira o modelo: ");
			fgets(novaMoto.modelo, 20, stdin);
			printf("\nInsira o cor: ");
			scanf("%s", &novaMoto.cor);
			printf("\nInsira o cilindrada: ");
			scanf("%d", &novaMoto.cilindrada);
			printf("\nInsira o partida: ");
			scanf(" %c", &novaMoto.partida);
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);

			inserirElementoInicio(lista, novaMoto);
			break;

		case 7:

			dequeue(fila);
	
			break;

		case 8:

			fila = excluirLista(lista);
			break;

		case 11:

			salvarDados(lista);
			break;

		case 12:

			carregarDados(lista);
			break;

		default:

			printf("\nOpcao invalida");
			break;
		}

		printf("\n\nDeseja continuar?[s/n]\n");
		scanf(" %c", &continuar);

		if(continuar == 'n' || continuar == 'N')
		{
			exit(0);
		}

	}
	while(continuar == 's' || continuar == 'S' );
	
	return 0;
}

//Funções

/*FUNÇÃO CRIAR LISTA - função feita para criar um espaço na memória para
armazenar os elemntos criados*/
Fila *criarFila()
{
	//Reserva espaço para um ponteiro do tipo lista;
	Fila *novaFila = (Lista*)malloc(sizeof(Lista));

	//Verifica se a lista existe;
	if(novaFila == NULL)
	{
		printf("\nErro na alocacao de memoria...");
		return NULL;
	}
	
	novaFila->inicio = NULL;
	novaFila->fim = NULL;
	
	//Caso existir retorna o valor da nova lista e a armazena na variavel lista;
	return novaLista;
}

/*FUNÇÃO IMORIMIR ELEMENTOS - função implementada para percorrer os componentes
da lista e exibir os elementos*/

/*FUNÇÃO INSERIR ELEMENTO - função implementada para adicionar elementos a lista
utilizando o sistema de ponteiros, onde cada elemento terá um ponteiro que apontará
para o próximo elemento*/
int enqueue(Fila *fila, Motocicleta novaMoto)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	filaNo *p;
	//Criando espaço para armazenar o novo elemento e seu ponteiro, espaço do tamanho listaNo;
	filaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	//Verifica se a lista foi criada;
	if(Fila == NULL)
	{
		printf("\nA lista nao foi criada...\n");
		return 0;
	}

	//Atribui o valor inserido para o novo elemento e faz ele apontar para NULL;
	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	//Verifica se existe algum elemento na lista;
	if(fila->inicio == NULL)
	{
		//Caso não, adiciona um elemento ao inicio da lista;
		fila->inicio = novoEspaco;
		fila->fim = novoEspaco;
		return 1;
	}

	fila->fim->prox = novoEspaco;
	fila->fim = fila->fim->prox;

	return 1;
}

/*FUNÇÃO REMOVER ELEMENTO - função implementada para remover um elemento em qualquer posição
indicada pelo seu código*/
int dequeue(Fila *fila)
{
	//ponteiro criado para armazenar um valor para liberar seu espaço de memoria;
	filaNo *ref;

	//Verifica se a lista foi criada;
	if(fila == NULL)
	{
		printf("\nA lista nao foi criada...");
		return NULL;
	}

	//verifica se a lista esta vazia;
	if(fila->inicio == NULL){
		printf("\nA lista esta vazia...");
		return 1;
	}
	
	//remove o elemento caso ele esteja na posicao inicial 
	ref = fila->inicio;
	fila->inicio = fila->inicio->prox;
	
	return ref;
}

/*FUNÇÃO EXCLUIR LISTA - função percorre a lista liberando espaço na de cada elemento
depois libera o espaço da própria lista */
Fila *excluirFila(Fila *fila)
{
	//ponteiro criado para armazenar um valor para liberar seu espaco na memoria;
	listaNo *ref;

	//verifica se a fila existe;
	if(lista == NULL)
	{
		printf("\nA fila nunca existiu...");
		return NULL;
	}

	//libera todos os elementos da fila;	
	While(fila->inico != NULL){
		ref = fila->inicio;
		fila->inicio = fila->inicio->prox
		free(ref);
	}
	
	//libera o espaco da lista
	free(Fila);

	printf("\nLista de Motos excluida com sucesso...");

	return NULL;

}


