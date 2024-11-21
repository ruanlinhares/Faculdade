//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

//Definições
#define TAM 5

//Estruturas
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
	int topo;
	Motocicleta *elementos;
} Pilha;

//Declarando funções
Pilha *criarPilha();
Pilha * excluirPilha(Pilha *);
int push(Pilha *, Motocicleta);
void verTopo(Pilha *);
int pop(Pilha *);
Pilha * excluirPilha(Pilha *);



//Função main
int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int opc;
	char continuar = 's';
	Motocicleta novaMoto;
	Pilha *pilha = NULL;

	do
	{
		printf("\n1 - Criar Pilha");
		printf("\n2 - Inserir moto");
		printf("\n5 - Exibir topo da pilha");
		printf("\n7 - Remover Registro da Moto");
		printf("\n8 - Excluir lista de Motos");
		printf("\n");
		printf("\nEscolha uma opção: ");
		scanf("%d", &opc);
		getchar();

		switch(opc)
		{
		case 1:

			lista = criarLista();
			break;

		case 2:

			cabecalho();
			printf("\nInsira o código: ");
			scanf("%d", &novaMoto.cod_moto);
			fflush(stdin);
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

			inserirElemento(lista, novaMoto);

			break;

		case 3 :

			verTopo(pilha);
			break;

		case 4:
			
			pop(pilha);
			break;

		case 5:

			pilha = excluirPilha(pilha);
			break;


		default:

			printf("\nOpção inválida");
			break;
		}

		printf("\n\nDeseja continuar?[s/n]\n");
		getchar();
		scanf("%c", &continuar);

		if(continuar == 'n' || continuar == 'N')
		{
			exit(0);
		}
		else
		{
			printf("\n\nOpção inválida...Prosseguindo com a aplicação");
		}

	}
	while(continuar == 's' || continuar == 'S' );
	return 0;
}

//Funções
Lista *criarPilha()
{
	Pilha *novaPilha = (Lista*)malloc(sizeof(Lista));

	if(novaPilha == NULL)
	{
		printf("Erro na alocação de memória");
		return NULL;
	}
	
	novaPilha->topo = 0;
	novaPilha->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	if(novaPilha->elementos == NULL)
	{
		printf("\nNão tem espaço");
		free(novaPilha);
		return NULL;
	}

	return novaPilha;
}

Lista *excluirPilha(Pilha *lista)
{
	if(lista == NULL)
	{
		printf("\nA lista nunca existiu...");
		return NULL;
	}

	free(pilha->elementos);

	free(pilha);

	printf("\nLista de Motos excluida com sucesso...");

	return NULL;
}


int push(Pilha *pilha, Motocicleta novaMoto)
{

	if(pilha == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	if(pilha->topo < TAM)
	{
		pilha->elementos[pilha->topo] = novaMoto;
		++(pilha->topo);
		
	}else
	{
		printf("\nEspaco esgotado(STACK OVERFLOW)\n");
		return 0;
	}

	return 1;
}

void verTopo(Pilha *pilha)
{

	if(pilha == NULL)
	{
		printf("\nA pilha não foi criada");
	}
	if(pilha->id == 0)
	{
		printf("\nPilha vazia");
	}
	
	printf("\n");
	
 	//alterar para mostrar atributos do meu elemento;
    return pilha->elementos[pilha->topo - 1];

}

int pop(Pilha *pilha)
{
	
	if(pilha == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	if(pilha->topo != 0){
		--(Pilha->topo);
	}else{
		printf("A pilha esta vazia");
		return 0;
	}

	return 0;
}

int eVazia(Pilha *pilha){
	
	if(pilha == NULL)
	{
		printf("\nA pilha não foi criada");
		return 1;
	}
	if(pilha->id == 0)
	{
		printf("\nPilha vazia");
		return 1;
	}	
	
	return 0;
}


