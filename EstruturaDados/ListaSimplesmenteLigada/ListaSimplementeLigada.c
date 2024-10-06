//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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
	int id;
	Motocicleta *elementos;
} Lista;

//Declarando funções
Lista *criarLista();
void imprimirElementos(Lista *);
int inserirElemento(Lista*, Motocicleta);

//Função main
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	char continuar = ' ';
	Motocicleta novaMoto;

	Lista *lista = NULL;

	do
	{
		printf("=========MotorRoad========");
		printf("\n1 - Criar Lista");
		printf("\n2 - Inserir moto");
		printf("\n3 - Imprimir Lista de motos");
		
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
			
			printf("-------CADASTRAR NOVA MOTO-------");
			printf("\nInsira o código: ");
			scanf("%d", &novaMoto.cod_moto);
			getchar();
			printf("\nInsira a marca: ");
			scanf("%s", &novaMoto.marca);
			printf("\nInsira o modelo: ");
			scanf("%s", &novaMoto.modelo);
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
			
			imprimirElementos(lista);
			break;
		
		default:
			printf("Opção inválida");
			break;
		}
		
		printf("Deseja continuar?\n");
		scanf("%c", &continuar);
		
	}while(continuar != 's' || continuar != 'S' );
	return 0;
}

//Funções

Lista *criarLista()
{
	Lista *newList = (Lista*)malloc(sizeof(Lista));

	if(newList == NULL)
	{
		printf("Erro na alocação de memória");
		return NULL;
	}
	newList->id = 0;
	newList->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	if(newList->elementos == NULL)
	{
		printf("\nNão tem espaço");
		free(newList);
		return NULL;
	}

	return newList;
}

void imprimirElementos(Lista *lista)
{
	int i;

	if(lista == NULL)
	{
		printf("\nA lista não foi criada");
	}
	if(lista->id == 0)
	{
		printf("\nLista vazia");
	}

	for(i = 0; i < lista->id; ++i)
	{
		printf("MOTO %d",i);
		printf("Código: %d\n", lista->elementos[i].cod_moto);
		printf("Marca: %s\n", lista->elementos[i].marca);
		printf("Modelo: %s\n", lista->elementos[i].modelo);
		printf("Cor: %c\n", lista->elementos[i].cor);
		printf("Cilindrada: %d\n", lista->elementos[i].cilindrada);
		printf("Partida: %c\n", lista->elementos[i].partida);
		printf("Alimentação: %c\n", lista->elementos[i].alimentacao);
		printf("Carga: %f kg\n", lista->elementos[i].capacidade_carga);
		printf("Preço: R$ %f\n", lista->elementos[i].preco);
	}

}


int inserirElemento(Lista *lista, Motocicleta novaMoto)
{

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	if(lista->id < TAM)
	{
		lista->elementos[lista->id] = novaMoto;
		++(lista->id);
	}
	else
	{
		printf("\nEspaco esgotado\n");
		return 0;
	}

	return 1;
}



