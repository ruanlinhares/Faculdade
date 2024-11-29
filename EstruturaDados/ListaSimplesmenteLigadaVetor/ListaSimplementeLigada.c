/****************************************************************** 
 * Nome: Lista com vetores                                        *
 * Descricao: Implementacao de lista com uso de vetores (array).  *
 *            Esse codigo possui as principais operacoes da       *
 *            lista, como:                                        *
 *            criar lista,                                        *
 *            inserir elemento(inicio, fim, por posicao),         *
 *            remover elemento,                                   *
 *            buscar elemento,                                    *
 *            mostrar elementos,                                  *
 *            atualizar elementos,								  *
 * 			  mostrar quantidade de elementos                     *
 *            excluir lista,									  *
 * 			  salvar dados,										  *
 * 			  carregar dados.                                     *
 * Autor: Ruan Vitor Linhares									  *
 * Ultima alteracao: 18/09/2024                                   *
 ******************************************************************/

//Bibliotecas chamadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definicoes das constantes
#define TAM 5

//Definição de estruturas
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

	//Ponteiro usado para criar lista
	Lista *lista = NULL;

	do
	{
		//menu de opcoes com switch(case)
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
		scanf(" %c", &continuar);

		if(continuar == 'n' || continuar == 'N')
		{
			exit(0);
		}

	}
	while(continuar == 's' || continuar == 'S' );
	return 0;
}

//Funcoes

/* Nome: criarLista
 * Parametro: void 
 * Retorno: endereco do espaco de memoria reservado pelo malloc
 * Descricao: Funcao responsavel pela criacao da lista e inicializacao
 *            do campo id e alocacao do vetor de elementos
 */
Lista *criarLista()
{
	//alocacao de memoria para a lista
	Lista *novaLista = (Lista*)malloc(sizeof(Lista));

	//verifica se o sistema conseguiu alocar um espaco para lista
	if(novaLista == NULL)
	{
		printf("Erro na alocacao de memoria");
		return NULL;
	}
	
	//atribui valor ao nosso id 
	novaLista->id = 0;
	//aloca memoria para um vetor de 5 elementos
	novaLista->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	//verifica se o sistema conseguiu alocar um vetor de 5 elementos
	if(novaLista->elementos == NULL)
	{
		printf("\nNao tem espaco");
		//caso não limpa a lista que ja existia
		free(novaLista);
		return NULL;
	}

	//retorna a lista criada
	return novaLista;
}

/* Nome: imprimirElementos
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: void
 * Descricao: Funcao criada para apresentar todos elementos presentes na lista
 */
void imprimirElementos(Lista *lista)
{	
	int i;

	//verifica se a lista existe
	if(lista == NULL){
		printf("\nA lista nao foi criada");
	}

	//verifica se a lista esta vazia
	if(lista->id == 0)
	{
		printf("\nLista vazia");
	}

	//loop que percorre o vetor imprimindo os elementos contidos nele
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

/* Nome: inserirElemento
 * Parametros: lista - ponteiro que possui o endereco lista
 *             valor - elemento que sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento no final da lista
 */
int inserirElemento(Lista *lista, Motocicleta novaMoto)
{
	//verifica se a lista foi criada
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

	//verifica de a lista tem espaço
	if(lista->id < TAM)
	{
		//insere um elemento no vetor
		lista->elementos[lista->id] = novaMoto;
		//aumenta um elemento no vetor para apresentar o novo elemento inserido
		++(lista->id);
	}
	else
	{
		//caso o vetor nao tenha espaço exibe essa mensagem
		printf("\nEspaco esgotado\n");
		return 0;
	}

	return 1;
}

/* Nome: inserirElementoPosi
 * Parametros: lista - ponteiro que possui o endereco lista
 *             novaMoto - elemento que sera adicionado na lista
 *             vPosition - posicao que o elemento sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento na posicao indicada na lista
 */
int inserirElementoPosi(Lista *lista, Motocicleta novaMoto, int vPosition)
{
	int i;

	//verifica se a lista foi criada
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada\n");
		return 0;
	}

    //verifica de a lista tem espaco
	if(lista->id < TAM)
	{	
		//verifica se a posicao escolhida existe
		if(vPosition < lista->id)
		{	
			//percorre o vetor ate a posicao escolhida
			for( i = lista->id; i > vPosition; --i)
			{
				//enquanto nao acha o valor movimenta os elementos do vetor para a direita 
				lista->elementos[i] = lista->elementos[i - 1];
			}

			//insere o elemento na posicao escolhida
			lista->elementos[vPosition] = novaMoto;
			
			//adiciona mais um elemento ao vetor para exibi-lo
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
	
	//retorna 1 para dizer que foi adicionado com sucesso
	return 1;
}

/* Nome: inserirElementoInicio
 * Parametros: lista - ponteiro que possui o endereco lista
 *             cod_moto - elemento que sera adicionado na lista
 * Retorno: 1 se o elemento foi adicionado, 0 - caso contrario
 * Descricao: Funcao criada para inserir um elemento no inicio da lista
 */
int inserirElementoInicio(Lista * lista, Motocicleta novaMoto)
{
	int i;

	//verifica de a lista existe
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada");
		return 0;
	}
	
	//verifica se a lista tem espaco
	if(lista->id < TAM)
	{
		//percorre a lista ate a primeira posicao
		for(i = lista->id; i > 0; --i)
		{
			//movimenta os elementos para direita
			lista->elementos[i] = lista->elementos[i - 1];
		}

		//insere o novo elemento na primeira posicao
		lista->elementos[0] = novaMoto;

		//adiciona mais um elemento ao vetor para exibi-lo
		++(lista->id);

	}
	else
	{
		printf("Lista sem espaco");
		return 0;
	}

	//retorna 1 para indicar que inseriu com sucesso
	return 1;
}

/* Nome: buscarElemento
 * Parametro: lista - ponteiro que possui o endereco lista
 *            cod_moto - elemento que sera buscado na lista
 * Retorno: o indice do elemento encontrado, -1 caso contrario
 * Descricao: Funcao criada para buscar um elemento na lista
 */
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

/* Nome: removerElemento
 * Parametro: lista - ponteiro que possui o endereco lista
 *            cod_moto - elemento que sera removido da lista
 * Retorno: 1 se o elemento foi removido, 0 - caso contrario
 * Descricao: Funcao criada para remover um elemento da lista
 */
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

/* Nome: atualizarElementos
 * Parametros: lista - ponteiro que possui o endereco lista
 *             cod_busca - elemento que sera buscado na lista
 *             novaMoto - novo valor do elemento que sera alterado 
 * Retorno: 1 - quando o valor e atualizado e 0 - caso contrario
 * Descricao: Funcao responsavel por atualizar um elemento
 *            da lista, caso o mesmo esteja na lista indicada
 */
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

/* Nome: qtdElementosLista
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: void
 * Descricao: Funcao criada para contar a quantidade de elementos do vetor
 */
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

/* Nome: salvarDados
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - para quando salva os dados || 0 - quando não consegue salvar os dados
 * Descricao: Funcao cria um documento ".txt" e insere/salva nele as informações
 * 			  que estavam na memória do programa em execução.
 */
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

/* Nome: carregarDados
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - quando carrega os dados na memoria do programa em execucao || 0 - caso contrario
 * Descricao: Funcao criada para carregar os dados de um documento ".txt" para a memoria
 * 			  programa em execucao
 */
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


