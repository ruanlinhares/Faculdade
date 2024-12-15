/****************************************************************** 
 * Nome: Pilha com vetores                                        *
 * Descricao: Implementacao de Pilha com uso de vetores (array).  *
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

//Definicoes
#define TAM 6

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
	int inicio;
	int fim;
	Motocicleta *elementos;
} Fila;

//Declarando funcoes
Fila * criarFila();
int enqueue(Fila *, Motocicleta);
int dequeue(Fila *);
Fila * excluirFila(Fila*);
int salvarDados(Fila*);
int carregarDados(Fila*);



//Funcao main
int main ()
{
	int opc;
	char continuar = 's';
	Motocicleta novaMoto;
	Fila *fila = NULL;

	do
	{
		printf("\n1 - Criar Fila");
		printf("\n2 - Inserir moto");
		printf("\n3 - Remover moto");
		printf("\n4 - Excluit Fila");
		printf("\n5 - Salvar dados do programa");
		printf("\n6 - carregar dados exitentes");

		printf("\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opc);
		getchar();

		switch(opc)
		{
		case 1:

			fila = criarFila();
			break;

		case 2:

			printf("\nInsira o codigo: ");
			scanf("%d", &novaMoto.cod_moto);
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
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

//Funcoes

/* Nome: criarFila
 * Parametro: nenhum
 * Retorno: novaFila - para quando alocar espaco para a fila || NULL - quando não consegue alocar espaço para fila	
 * Descricao: Funcao reserva espaco na memoria para a estrutura fila;
 */
Fila *criarFila()
{
	//aloca o espaco para a fila
	Fila *novaFila = (Fila*)malloc(sizeof(Fila));

	//vrifica se a lista foi criada
	if(novaFila == NULL)
	{
		printf("Erro na alocacao de memoria");
		return NULL;
	}
	
	//define valores padrão para inicio e fim	
	novaFila->inicio = 0;
	novaFila->fim = 0;

	//aloca espaco para o vetor de motos
	novaFila->elementos = (Motocicleta *)malloc(TAM * sizeof(Motocicleta));

	//verifica se o vetor de motos foi alocado
	if(novaFila->elementos == NULL)
	{
		printf("\nNao tem espaco");
		free(novaFila);
		return NULL;
	}

	//se tudo deu certo retorna a fila
	return novaFila;
}

/* Nome: enqueue
 * Parametro: Fila - ponteiro que possui o endereco fila/ novaMoto - elemento que queremos adicionar
 * Retorno: 1 - se conseguit adicionar o elemento na fila || 0 - quando não consegue adicionar o elemento na fila
 * Descricao: Funcao asiciona um elemento a fila;
 */
int enqueue(Fila *fila, Motocicleta novaMoto)
{
	//veriifica se a fila foi criada
	if(fila == NULL)
	{
		printf("\nA Fila nao foi criada\n");
		return 0;
	}

	// Verifica se é possível adicionar um elemento na fila
	if((fila->fim +1)%TAM != fila->inicio)
	{
		// Insere o novo elemento (novaMoto) na posição apontada por 'fim'
		fila->elementos[fila->fim] = novaMoto;
		// Atualiza o ponteiro 'fim' para a próxima posição de forma circular
		fila->fim = (fila->fim +  1) % TAM;
	}
	else
	{
		printf("\nEspaco esgotado\n");
		return 0;
	}

	//retorna 1 se conseguir adicionar o elemento
	return 1;
}

/* Nome: dequeue
 * Parametro: Fila - ponteiro que possui o endereco fila
 * Retorno: 1 - para quando consegue remover o elemento da fila || 0 - quando não consegue remover o elemento da fila
 * Descricao: Funcao remove um elemento da fila;
 */
int dequeue(Fila *fila)
{
	//verifica se a fila existe
	if(fila == NULL)
	{
		printf("\nA fila nao foi criada\n");
		return 0;
	}

	// Verifica se é possível avançar o ponteiro
	if((fila->inicio +1) % TAM != fila->fim)
	{
		// Atualiza o ponteiro 'inicio' para a próxima posição de forma circular
    	// Isso simula a remoção do elemento atual da fila
		fila->inicio = (fila->inicio+1) % TAM;
	}
	else
	{
		printf("\nEspaco esgotado\n");
		return 0;
	}

	//retorna 1 se conseguir remover
	return 1;
}

/* Nome: excluir fila
 * Parametro: Fila - ponteiro que possui o endereco de fila
 * Retorno: NULL - para caso consiga desalocar a estrutura fila
 * Descricao: Funcao desaloca a estutura da fila;
 */
Fila *excluirFila(Fila *fila)
{
	//verifica se a fila existe
	if(fila == NULL)
	{
		printf("\nA fila nunca existiu...");
		return NULL;
	}

	//desaloca da memoria o vetor de motocicletas
	free(fila->elementos);

	//desaloca da memoria o vetor de fila
	free(fila);

	printf("\nFila de Motos excluida com sucesso...");

	return NULL;
}

/* Nome: salvarDados
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - para quando salva os dados || 0 - quando não consegue salvar os dados
 * Descricao: Funcao cria um documento ".txt" e insere/salva nele as informações
 * 			  que estavam na memória do programa em execução.
 */
int salvarDados(Fila* pilha)
{
	int i;

	//verifica se a lista existe 
	if(pilha == NULL)
	{
		printf("\nA Fila nao foi criada");
		return 0;
	}

	//cria um ponteiro do tipo FILE e utiliza fopen() para criar um .txt e escrever
	FILE * arquivo = fopen("RegistroMotos.txt", "w");

	//verifica se o .txt dfoi criado 
	if(arquivo == NULL)
	{
		printf("Erro ao abrir o aquivo");
		return 0;
	}

	//loop percorre todos os elementos do vetor
	for(i = pilha->inicio; i < pilha->fim; i++)
	{
		//utilizamos fprintf() para gravar os atributos do elemento no arquivo .txt
		fprintf(arquivo, "%d %s %s %c %d %c %c %.1f %.2f\n", 
		pilha->elementos[i].cod_moto, 
		pilha->elementos[i].marca, 
		pilha->elementos[i].modelo,
		pilha->elementos[i].cor, 
		pilha->elementos[i].cilindrada, 
		pilha->elementos[i].partida, 
		pilha->elementos[i].alimentacao, 
		pilha->elementos[i].capacidade_carga, 
		pilha->elementos[i].preco);
	}
	//fecha a operacao no .txt e salva os registros de escrita feito nele
	fclose(arquivo);

	printf("\nDados salvos com sucesso...\n");
	
	//retorna 1 se os dados foram salvos 
	return 1;
}

/* Nome: carregarDados
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - quando carrega os dados na memoria do programa em execucao || 0 - caso contrario
 * Descricao: Funcao criada para carregar os dados de um documento ".txt" para a memoria
 * 			  programa em execucao
 */
int carregarDados(Fila *pilha)
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
			enqueue(pilha, registroMoto);	
		}	
	
	}

	//fecha a operacao do arquivo
	fclose(arquivo);
	printf("\n\nDados carregados com sucesso...");
	//retorna 1 se o aquivo conseguir carregar os dados na memoria
	return 1;
}

