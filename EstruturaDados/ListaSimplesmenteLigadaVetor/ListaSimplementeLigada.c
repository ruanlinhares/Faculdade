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
	int id;
	Motocicleta *elementos;
} Lista;

//Declarando funcoes
Lista *criarLista();
void imprimirElementos(Lista *);
int inserirElemento(Lista *, Motocicleta);
int inserirElementoPosi(Lista *, Motocicleta, int);
int inserirElementoInicio(Lista *, Motocicleta);
int buscarElemento(Lista *, int);
int removerElemento(Lista *, int);
Lista * excluirLista(Lista*);
int atualizarElementos(Lista*, Motocicleta, int);
void qtdElementosLista(Lista *);
int salvarDados(Lista *);
int carregarDados(Lista *);


//Funcao main
int main ()
{
	int opc;
	int vPosition;
	int cod_busca;
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

Lista *criarLista()
{
	Lista *newList = (Lista*)malloc(sizeof(Lista));

	if(newList == NULL)
	{
		printf("Erro na alocacao de memoria");
		return NULL;
	}
	
	newList->id = 0;
	newList->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	if(newList->elementos == NULL)
	{
		printf("\nNao tem espaco");
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
		printf("\nA lista nao foi criada");
	}
	if(lista->id == 0)
	{
		printf("\nLista vazia");
	}

	for(i = 0; i < lista->id; ++i)
	{
		printf("\nMOTO %d\n\n", i + 1);
		printf("Codigo: %d\n", lista->elementos[i].cod_moto);
		printf("Marca: %s", lista->elementos[i].marca);
		printf("Modelo: %s", lista->elementos[i].modelo);
		printf("Cor: %c\n", lista->elementos[i].cor);
		printf("Cilindrada: %d\n", lista->elementos[i].cilindrada);
		printf("Partida: %c\n", lista->elementos[i].partida);
		printf("Alimentacao: %c\n", lista->elementos[i].alimentacao);
		printf("Carga: %.1f kg\n", lista->elementos[i].capacidade_carga);
		printf("Preco: R$ %.2f\n", lista->elementos[i].preco);
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

int inserirElementoPosi(Lista *lista, Motocicleta novaMoto, int vPosition)
{
	int i;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	if(lista->id < TAM)
	{
		if(vPosition < lista->id)
		{
			for( i = lista->id; i > vPosition; --i)
			{
				lista->elementos[i] = lista->elementos[i - 1];
			}

			lista->elementos[vPosition] = novaMoto;

			++(lista->id);
		}
		else
		{
			printf("A posicao esta fora do intervalo do numero de elementos");
		}

	}
	else
	{
		printf("Lista sem espaco");
		return 0;
	}
	return 1;
}

int inserirElementoInicio(Lista * lista, Motocicleta novaMoto)
{
	int i;

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada");
		return 0;
	}

	if(lista->id < TAM)
	{
		for(i = lista->id; i > 0; --i)
		{
			lista->elementos[i] = lista->elementos[i - 1];
		}

		lista->elementos[0] = novaMoto;

		++(lista->id);

	}
	else
	{
		printf("Lista sem espaco");
		return 0;
	}

	return 1;
}


int buscarElemento(Lista *lista, int cod_moto)
{
	int i;

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada");
		return 0;
	}

	for(i = 0; i < lista->id; ++i)
	{
		if(lista->elementos[i].cod_moto == cod_moto)
		{
			printf("\nMOTO %d\n\n", i + 1);
			printf("Codigo: %d\n", lista->elementos[i].cod_moto);
			printf("Marca: %s", lista->elementos[i].marca);
			printf("Modelo: %s", lista->elementos[i].modelo);
			printf("Cor: %c\n", lista->elementos[i].cor);
			printf("Cilindrada: %d\n", lista->elementos[i].cilindrada);
			printf("Partida: %c\n", lista->elementos[i].partida);
			printf("Alimentacao: %c\n", lista->elementos[i].alimentacao);
			printf("Carga: %.1f kg\n", lista->elementos[i].capacidade_carga);
			printf("Preco: R$ %.2f\n", lista->elementos[i].preco);
			return 1;
		}
	}
	
	printf("\nCodigo da moto nao encontrado...");
	return 0;
}


int removerElemento(Lista *lista, int cod_moto)
{
	int i, j;

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	for(i = 0; i < lista->id; ++i)
	{
		if( cod_moto == lista->elementos[i].cod_moto)
		{
			for(j = i; j < lista->id - 1; ++j)
			{
				lista->elementos[j] = lista->elementos[j + 1];
			}

			--(lista->id);

			printf("Moto removida com sucesso...");
			return 1;
		}

	}
	printf("\nCodigo da moto nao encontrado...");
	return 0;
}

Lista *excluirLista(Lista *lista)
{
	if(lista == NULL)
	{
		printf("\nA lista nunca existiu...");
		return NULL;
	}

	free(lista->elementos);

	free(lista);

	printf("\nLista de Motos excluida com sucesso...");

	return NULL;
}

int atualizarElementos(Lista *lista,  Motocicleta novaMoto, int cod_busca)
{
	int i;

	if (lista == NULL)
	{
		printf("\nA lista nao foi criada");
		return 0;
	}

	if(cod_busca >= 0 )
	{
		for(i = 0; i <= lista->id; i += 1)
		{
			if(lista->elementos[i].cod_moto == cod_busca)
			{
				lista->elementos[i] = novaMoto;

				printf("\nDados alterados com sucesso...");
			}
		}
	}
	else
	{
		printf("\nCodigo da moto nao encontrado...");
		return 0;
	}
	return 1;
}

void qtdElementosLista(Lista *lista)
{
	int qtd_elementos = lista->id;

	if (lista == NULL)
	{
		printf("\nA lista nao foi criada");
	}
	if(qtd_elementos > 0)
	{
		printf("\nA lista tem atualmente %d elemento(s)", qtd_elementos);
	}
	else
	{
		printf("A lista esta vazia...");
	}
}

int salvarDados(Lista* lista)
{
	int i;

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada");
		return 0;
	}

	FILE * arquivo = fopen("RegistroMotos.txt", "w");


	if(arquivo == NULL)
	{
		printf("Erro ao abrir o aquivo");
		return 0;
	}

	for(i = 0; i < lista->id; ++i)
	{
		fprintf(arquivo, "\nMOTO %d", i + 1);
		fprintf(arquivo, "\nCODIGO:%d", lista->elementos[i].cod_moto);
		fprintf(arquivo, "\nMARCA: %s", lista->elementos[i].marca);
		fprintf(arquivo, "MODELO: %s", lista->elementos[i].modelo);
		fprintf(arquivo, "COR: %c", lista->elementos[i].cor);
		fprintf(arquivo, "\nCILINDRADA: %d", lista->elementos[i].cilindrada);
		fprintf(arquivo, "\nPARTIDA: %c", lista->elementos[i].partida);
		fprintf(arquivo, "\nALIMENTACAO: %c", lista->elementos[i].alimentacao);
		fprintf(arquivo, "\nCARGA: %.1f KG", lista->elementos[i].capacidade_carga);
		fprintf(arquivo, "\nPRECO: R$ %.2f", lista->elementos[i].preco);
	}
	fclose(arquivo);

	printf("\nDados salvos com sucesso...");
	return 1;
}

int carregarDados(Lista *lista)
{

	FILE * arquivo = fopen("RegistroMotos.txt", "r");

	if(arquivo == NULL)
	{
		printf("\nErro ao abrir o arquivo...");
		return 0;
	}


	char registro[100];
	while(fgets(registro, 100, arquivo) != NULL)
	{
		printf("%s", registro);
	}

	fclose(arquivo);
	printf("\n\nDados carregados com sucesso...");
	return 1;
}


