//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

//Estruturas
typedef struct ListaNo listaNo;

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
	listaNo *prim;
} Lista;

struct ListaNo
{
	Motocicleta novaMoto;
	listaNo *prox;
};

//Declarando funções
void cabecalho();
Lista *criarLista();
void imprimirElementos(Lista *);
int inserirElemento(Lista *, Motocicleta);
int inserirElementoPosi(Lista *, Motocicleta, int);
int inserirElementoInicio(Lista *, Motocicleta);
int buscarElemento(Lista *, int);
/*int removerElemento(Lista *, int);
Lista * excluirLista(Lista*);
int atualizarElementos(Lista*, Motocicleta, int);
void qtdElementosLista(Lista *);
int salvarDados(Lista *);
int carregarDados(Lista *);*/


//Função main
int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int opc;
	int cod_busca;
	char continuar = 's';
	Motocicleta novaMoto;


	Lista *lista = NULL;

	do
	{
		cabecalho();
		printf("\n1 - Criar Lista");
		printf("\n2 - Inserir moto");
		printf("\n3 - inserir moto em uma posição na lista");
		printf("\n4 - inserir moto no topo da lista");
		printf("\n5 - Imprimir Lista de motos");
		printf("\n6 - Buscar Moto pelo código");
		printf("\n7 - Remover Registro da Moto");
		printf("\n8 - Excluir lista de Motos");
		printf("\n9 - Atualizar registro da moto");
		printf("\n10 - Quantidade de motos registradas");
		printf("\n11 - Salvar dados do programa");
		printf("\n12 - carregar dados exitentes");



		printf("\n");
		printf("\nEscolha uma opção: ");
		scanf("%d", &opc);
		fflush(stdin);

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
			printf("\n\n");
			printf("Informe a posição que deseja inserir a nova moto: ");
			scanf("%d", &cod_busca);

			inserirElementoPosi(lista, novaMoto, cod_busca);
			break;

		case 4:

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

			inserirElementoInicio(lista, novaMoto);

		case 5 :

			cabecalho();
			imprimirElementos(lista);
			break;

		case 6:

			cabecalho();
			printf("\nDigite o código da moto: ");
			scanf("%d", &cod_busca);
			buscarElemento(lista, cod_busca);
			break;

		case 7:

			cabecalho();
			printf("\nInsira o código da moto para remoção: ");
			scanf("%d", &cod_busca);
			//removerElemento(lista, cod_busca);
			break;

		case 8:

			//lista = excluirLista(lista);
			break;

		case 9:

			cabecalho();
			printf("\nInsira o código da moto que deseja atualizar: ");
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
			printf("\nInsira o alimentação: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preço: ");
			scanf("%f", &novaMoto.preco);

			//atualizarElementos(lista, novaMoto, cod_busca);
			break;

		case 10:

			//qtdElementosLista(lista);
			break;

		case 11:

			//salvarDados(lista);
			break;

		case 12:

			//carregarDados(lista);
			break;

		default:

			printf("\nOpção inválida");
			break;
		}

		printf("\n\nDeseja continuar?[s/n]\n");
		fflush(stdin);
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

void cabecalho()
{
	system("cls||clear");
	printf("=========MotorRoad========");
}

Lista *criarLista()
{
	Lista *novaLista = (Lista*)malloc(sizeof(Lista));

	if(novaLista == NULL)
	{
		printf("Erro na alocação de memória");
		return NULL;
	}

	return novaLista;
}

void imprimirElementos(Lista *lista)
{
	listaNo *p;
	if(lista == NULL)
	{
		printf("\nA lista não foi criada");
	}
	if(lista->prim == NULL)
	{
		printf("\nLista vazia");
	}

	for(p = lista->prim; p != NULL; p = p->prox)
	{

		printf("\nCÓDIGO: %d", p->novaMoto.cod_moto);
		printf("\nMARCA: %s",  p->novaMoto.marca);
		printf("MODELO: %s", p->novaMoto.modelo);
		printf("COR: %c", p->novaMoto.cor);
		printf("\nCILINDRADA: %d", p->novaMoto.cilindrada);
		printf("\nPARTIDA: %c", p->novaMoto.partida);
		printf("\nALIMENTAÇÃO: %c", p->novaMoto.alimentacao);
		printf("\nCARGA: %.1f kg", p->novaMoto.capacidade_carga);
		printf("\nPREÇO: R$%.2f", p->novaMoto.preco);
		printf("\n");
	}

}

int inserirElemento(Lista *lista, Motocicleta novaMoto)
{
	listaNo *p;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	if(lista->prim == NULL)
	{
		lista->prim = novoEspaco;
		return 1;
	}

	for(p = lista->prim; p->prox != NULL ; p = p->prox);

	p->prox = novoEspaco;

	return 1;
}

int inserirElementoPosi(Lista *lista, Motocicleta novaMoto, int cod_busca)
{
	listaNo *p;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	if(lista == NULL){
		printf("\nA lista não foi criada\n");
		return 0;
	}

	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;
	
	if(lista->prim == NULL){
		lista->prim = novoEspaco;
		return 1;
	}
	
	for(p = lista->prim; p->prox != NULL; p = p->prox){

		if(cod_busca == p->novaMoto.cod_moto){
			novoEspaco->prox =
			return 1;
			
		}
	}
	
	for(p = lista->prim; p->prox != NULL; p = p->prox);
	p ->prox = novoEspaco;
	
	return 1;
}

int inserirElementoInicio(Lista * lista, Motocicleta novaMoto)
{
	listaNo *p;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	if(lista->prim == NULL)
	{
		lista->prim = novoEspaco;
		return 1;
	}

 	p = lista->prim;
 	lista->prim = novoEspaco;
 	lista->prim->prox = p;

	

	return 1;
}

int buscarElemento(Lista *lista, int cod_busca)
{
	listaNo *p;
	if(lista == NULL)
	{
		printf("\nA lista não foi criada");
	}
	if(lista->prim == NULL)
	{
		printf("\nLista vazia");
	}

	for(p = lista->prim; p != NULL; p = p->prox)
	{
		if(cod_busca == p->novaMoto.cod_moto)
		{
			printf("\nCÓDIGO: %d", p->novaMoto.cod_moto);
			printf("\nMARCA: %s",  p->novaMoto.marca);
			printf("MODELO: %s", p->novaMoto.modelo);
			printf("COR: %c", p->novaMoto.cor);
			printf("\nCILINDRADA: %d", p->novaMoto.cilindrada);
			printf("\nPARTIDA: %c", p->novaMoto.partida);
			printf("\nALIMENTAÇÃO: %c", p->novaMoto.alimentacao);
			printf("\nCARGA: %.1f kg", p->novaMoto.capacidade_carga);
			printf("\nPREÇO: R$%.2f", p->novaMoto.preco);
			printf("\n");
			return 1;
		}
	}

	printf("\nCódigo da moto não encontrado...");
	return 0;
}

/*
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
	printf("\nCódigo da moto não encontrado...");
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
		printf("\nA lista não foi criada");
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
		printf("\nCodigo da moto não encontrado...");
		return 0;
	}
	return 1;
}

void qtdElementosLista(Lista *lista)
{
	int qtd_elementos = lista->id;

	if (lista == NULL)
	{
		printf("\nA lista não foi criada");
	}
	if(qtd_elementos > 0)
	{
		printf("\nA lista tem atualmente %d elemento(s)", qtd_elementos);
	}
	else
	{
		printf("A lista está vazia...");
	}
}

int salvarDados(Lista* lista)
{
	int i;

	if(lista == NULL)
	{
		printf("\nA lista não foi criada");
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
		fprintf(arquivo, "\nCÓDIGO:%d", lista->elementos[i].cod_moto);
		fprintf(arquivo, "\nMARCA: %s", lista->elementos[i].marca);
		fprintf(arquivo, "MODELO: %s", lista->elementos[i].modelo);
		fprintf(arquivo, "COR: %c", lista->elementos[i].cor);
		fprintf(arquivo, "\nCILINDRADA: %d", lista->elementos[i].cilindrada);
		fprintf(arquivo, "\nPARTIDA: %c", lista->elementos[i].partida);
		fprintf(arquivo, "\nALIMENTAÇÃO: %c", lista->elementos[i].alimentacao);
		fprintf(arquivo, "\nCARGA: %.1f KG", lista->elementos[i].capacidade_carga);
		fprintf(arquivo, "\nPREÇO: R$ %.2f", lista->elementos[i].preco);
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
}*/


