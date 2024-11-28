//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definicoes
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
	Motocicleta *inicio
	Motocicleta *fim
	Motocicleta *elementos;
} Fila;

//Declarando funcoes
Fila * criarFila();
void verElementoinicio(Lista *);
int enqueue(Fila *, Motocicleta);
int dequeue(Fila *, int);
Fila * excluirFila(Fila*);



//Funcao main
int main ()
{
	int opc;
	char continuar = 's';
	Motocicleta novaMoto;


	Lista *lista = NULL;

	do
	{
		cabecalho();
		printf("\n1 - Criar Lista");
		printf("\n2 - Inserir moto");
		printf("\n3 - inserir moto em uma posicao na lista");
		printf("\n4 - inserir moto no topo da lista");
		printf("\n5 - Imprimir Lista de motos");
		printf("\n6 - Buscar Moto pelo codigo");
		printf("\n7 - Remover Registro da Moto");
		printf("\n8 - Excluir lista de Motos");
		printf("\n9 - Atualizar registro da moto");
		printf("\n10 - Quantidade de motos registradas");
		printf("\n11 - Salvar dados do programa");
		printf("\n12 - carregar dados exitentes");



		printf("\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opc);
		getchar();

		switch(opc)
		{
		case 1:

			lista = criarLista();
			break;

		case 2:

			printf("\nInsira o codigo: ");
			scanf("%d", &novaMoto.cod_moto);
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

			inserirElemento(lista, novaMoto);

			break;

		case 3 :

			printf("\nInsira o codigo: ");
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);
			printf("\n\n");
			printf("Informe a posicao que deseja inserir a nova moto: ");
			scanf("%d", &vPosition);

			inserirElementoPosi(lista, novaMoto, vPosition);
			break;

		case 4:

			printf("\nInsira o codigo: ");
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);

			inserirElementoInicio(lista, novaMoto);

		case 5 :

			imprimirElementos(lista);
			break;

		case 6:

			printf("\nDigite o codigo da moto: ");
			scanf("%d", &cod_busca);
			buscarElemento(lista, cod_busca);
			break;

		case 7:

			printf("\nInsira o codigo da moto para remo��o: ");
			scanf("%d", &cod_busca);
			removerElemento(lista, cod_busca);
			break;

		case 8:

			lista = excluirLista(lista);
			break;

		case 9:

			printf("\nInsira o codigo da moto que deseja atualizar: ");
			scanf("%d", &cod_busca);
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);

			atualizarElementos(lista, novaMoto, cod_busca);
			break;

		case 10:

			qtdElementosLista(lista);
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
		getchar();
		scanf(" %c", &continuar);

		if(continuar == 'n' || continuar == 'N')
		{
			exit(0);
		}
		else
		{
			printf("\n\nOpcao invalida...Prosseguindo com a aplicacao");
		}

	}
	while(continuar == 's' || continuar == 'S' );
	return 0;
}

//Funcoes

Fila *criarFila()
{
	Fila *novaFila = (Fila*)malloc(sizeof(Fila));

	if(newList == NULL)
	{
		printf("Erro na alocacao de memoria");
		return NULL;
	}
	
	newList->inicio = 0;
	novaFila->fim = 0;
	novaFila->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	if(newList->elementos == NULL)
	{
		printf("\nNao tem espaco");
		free(novaFila);
		return NULL;
	}

	return newList;
}

int enqueue(Fila *fila, Motocicleta novaMoto)
{

	if(fila == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	if((fila->fim +1)%TAM != fila->inicio)
	{
		fila->elementos[lista->fim] = novaMoto;
		fila->fim =(fila->fim+1)%TAM;
	}
	else
	{
		printf("\nEspaco esgotado\n");
		return 0;
	}

	return 1;
}

int dequeue(Fila *fila, Motocicleta novaMoto)
{

	if(fila == NULL)
	{
		printf("\nA fila nao foi criada\n");
		return 0;
	}

	if((fila->inicio +1)%TAM != fila->fim)
	{
		fila->inicio =(fila->inico+1)%TAM;
	}
	else
	{
		printf("\nEspaco esgotado\n");
		return 0;
	}

	return 1;
}

Fila *excluirFila(Fila *fila)
{
	if(fila == NULL)
	{
		printf("\nA lista nunca existiu...");
		return NULL;
	}

	free(fila->elementos);

	free(fila);

	printf("\nLista de Motos excluida com sucesso...");

	return NULL;
}

