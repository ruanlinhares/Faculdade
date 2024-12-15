/****************************************************************** 
 * Nome: Pilha com Apontadores                                    *
 * Descricao: Implementacao de Fila com uso de Apontadores.       *
 *            Esse codigo possui as principais operacoes da       *
 *            Pilha, como:                                        *
 *            criar fila,                                         *
 *            enqueue(adicionar elemento),                        *
 *            dequeue(remover elemento),                          *
 *            excluir fila,                                       *
 * 			  Carregar Dados,                                     *
 * 			  Salvar Dados.                                       *
 * Autor: RUAN VITOR LINHARES                                     *	
 ******************************************************************/

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
int salvarDados(Fila*);
int carregarDados(Fila*);

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
		printf("\n1 - Criar Fila");
		printf("\n2 - Inserir moto");
		printf("\n3 - Remover moto");
		printf("\n4 - Excluit Fila");
		printf("\n5 - Salvar dados do programa");
		printf("\n6 - carregar dados exitentes");



		printf("\n");
		printf("\nEscolha uma opção: ");
		scanf(" %d", &opc);

		switch(opc)
		{
		case 1:

			fila = criarFila();
			break;

		case 2:

			printf("\nInsira o código: ");
			scanf(" %d", &novaMoto.cod_moto);
			getchar();
			printf("\nInsira a marca: ");
			scanf("%s", novaMoto.marca);
			printf("\nInsira o modelo: ");
			scanf("%s", novaMoto.modelo);
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

			enqueue(fila, novaMoto);

			break;

		case 3:

			dequeue(fila);
	
			break;

		case 4:

			fila = excluirFila(fila);
			break;

		case 5:

			salvarDados(fila);
			break;

		case 6:

			carregarDados(fila);
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

/* Nome: criarFila
 * Parametro: nenhum
 * Retorno: novaFila - para quando alocar espaco para a fila || NULL - quando não consegue alocar espaço para fila	
 * Descricao: Funcao reserva espaco na memoria para a estrutura fila;
 */
Fila *criarFila()
{
	//Reserva espaço para um ponteiro do tipo fila;
	Fila *novaFila = (Fila*)malloc(sizeof(Fila));

	//Verifica se a fila existe;
	if(novaFila == NULL)
	{
		printf("\nErro na alocacao de memoria...");
		return NULL;
	}
	
	novaFila->inicio = NULL;
	novaFila->fim = NULL;
	
	//Caso existir retorna o valor da nova Fila e a armazena na variavel fila;
	return novaFila;
}



/* Nome: enqueue
 * Parametro: Fila - ponteiro que possui o endereco fila/ novaMoto - elemento que queremos adicionar
 * Retorno: 1 - se conseguit adicionar o elemento na fila || 0 - quando não consegue adicionar o elemento na fila
 * Descricao: Funcao asiciona um elemento a fila;
 */
int enqueue(Fila *fila, Motocicleta novaMoto)
{
	//Criando espaço para armazenar o novo elemento e seu ponteiro, espaço do tamanho listaNo;
	filaNo *novoEspaco = (filaNo*)malloc(sizeof(filaNo));

	//Verifica se a lista foi criada;
	if(fila == NULL)
	{
		printf("\nA fila nao foi criada...\n");
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

	//adiciona o elemento ao fim da fila
	fila->fim->prox = novoEspaco;
	//altera o ultimo elemento da fila para o adicionado recentemente
	fila->fim = fila->fim->prox;

	return 1;
}

/* Nome: dequeue
 * Parametro: Fila - ponteiro que possui o endereco fila
 * Retorno: 1 - para quando consegue remover o elemento da fila || 0 - quando não consegue remover o elemento da fila
 * Descricao: Funcao remove um elemento da fila;
 */
int dequeue(Fila *fila)
{
	//ponteiro criado para armazenar um valor para liberar seu espaço de memoria;
	filaNo *ref;

	//Verifica se a fila foi criada;
	if(fila == NULL)
	{
		printf("\nA fila nao foi criada...");
		return 0;
	}

	//verifica se a fila esta vazia;
	if(fila->inicio == NULL){
		printf("\nA fila esta vazia...");
		return 0;
	}
	
	//remove o elemento na posição inicial 
	ref = fila->inicio;
	fila->inicio = fila->inicio->prox;
	
	return 1;
}

/* Nome: excluir fila
 * Parametro: Fila - ponteiro que possui o endereco de fila
 * Retorno: NULL - para caso consiga desalocar a estrutura fila
 * Descricao: Funcao desaloca a estutura da fila;
 */
Fila *excluirFila(Fila *fila)
{
	//ponteiro criado para armazenar um valor para liberar seu espaco na memoria;
	filaNo *ref;

	//verifica se a fila existe;
	if(fila == NULL)
	{
		printf("\nA fila nunca existiu...");
		return NULL;
	}

	//libera todos os elementos da fila;	
	while(fila->inicio != NULL){
		//guarda a referencia do primeiro elemento
		ref = fila->inicio;

		//faz fila inicio apontar para tras do elemento a ser removido
		fila->inicio = fila->inicio->prox;
		
		//libera o primeiro elemento
		free(ref);
	}
	
	//libera o espaco da fila
	free(fila);

	printf("\nFila de Motos excluida com sucesso...");

	return NULL;

}

/* Nome: salvarDados
 * Parametro: fila - ponteiro que possui o endereco fila
 * Retorno: 1 - para quando salva os dados || 0 - quando não consegue salvar os dados
 * Descricao: Funcao cria um documento ".txt" e insere/salva nele as informações
 * 			  que estavam na memória do programa em execução.
 */
int salvarDados(Fila* fila)
{
	//declaracao de variaveis
	filaNo *p;

	//verifica se a lista existe 
	if(fila == NULL)
	{
		printf("\nA fila nao foi criada");
		return 0;
	}

	//cria um ponteiro do tipo FILE e utiliza fopen() para criar um .txt e escrever
	FILE * arquivo = fopen("RegistroMotos.txt", "w");

	//verifica se o .txt foi criado 
	if(arquivo == NULL)
	{
		printf("Erro ao abrir o aquivo");
		return 0;
	}

	//loop percorre todos os elementos do vetor
	for(p = fila->inicio; p != NULL; p = p->prox)
	{
		//utilizamos fprintf() para gravar os atributos do elemento no arquivo .txt
		fprintf(arquivo, "%d %s %s %c %d %c %c %.1f %.2f\n", 
		p->novaMoto.cod_moto, 
		p->novaMoto.marca, 
		p->novaMoto.modelo,
		p->novaMoto.cor, 
		p->novaMoto.cilindrada, 
		p->novaMoto.partida, 
		p->novaMoto.alimentacao, 
		p->novaMoto.capacidade_carga, 
		p->novaMoto.preco);
	}
	//fecha a operacao no .txt e salva os registros de escrita feito nele
	fclose(arquivo);

	printf("\nDados salvos com sucesso...\n");
	
	//retorna 1 se os dados foram salvos 
	return 1;
}

/* Nome: carregarDados
 * Parametro: fila - ponteiro que possui o endereco fila
 * Retorno: 1 - quando carrega os dados na memoria do programa em execucao || 0 - caso contrario
 * Descricao: Funcao criada para carregar os dados de um documento ".txt" para a memoria
 * 			  programa em execucao
 */
int carregarDados(Fila *fila)
{
	//define o numero de caracteres a ser lido por linha
	char registro[150];
	//abre um arquivo .txt no modo de leitura;
	FILE * arquivo = fopen("RegistroMotos.txt", "r");
	//cria um elemento para armazenarmos os registros;
	Motocicleta registroMoto;

	//verifica se o arquivo foi aberto
	if(arquivo == NULL)
	{
		printf("\nErro ao abrir o arquivo...");
		return 0;
	}

	// loop percorre cada linha do arquivo enquando ouver carateres a serem registrados
	while(fgets(registro, 150, arquivo) != NULL)
	{
		//verigfica se cada linha tem esses exatos dados ordenados 
		if(sscanf(registro, "%d %s %s %c %d %c %c %f %f\n", 
			&registroMoto.cod_moto, 
			registroMoto.marca,
			registroMoto.modelo, 
			&registroMoto.cor, 
			&registroMoto.cilindrada, 
			&registroMoto.partida,
			&registroMoto.alimentacao, 
			&registroMoto.capacidade_carga, 
			&registroMoto.preco) == 9){
			
			//insere no nosso elemento moto os dados lidos
			enqueue(fila, registroMoto);	
		}	
	
	}

	//fecha a operacao do arquivo
	fclose(arquivo);
	printf("\n\nDados carregados com sucesso...");
	//retorna 1 se o aquivo conseguir carregar os dados na memoria
	return 1;
}



