/****************************************************************** 
 * Nome: Pilha com Apontadores                                    *
 * Descricao: Implementacao de Pilha com uso de apontadores.  *
 *            Esse codigo possui as principais operacoes da       *
 *            Pilha, como:                                        *
 *            criar Pilha,                                        *
 *            push(adicionar elemento),                           *
 *            pop(remover elemento),                              *
 * 			  ehVaia(verifica se a pilha está vazia,              *
 * 			  ver Topo(informa o elemento no topo),               *
 *            excluir Pilha,                                      *
 * 			  Carregar Dados,                                     *
 * 			  Salvar Dados.                                       *
 * Autor: RUAN VITOR LINHARES                                     *
 ******************************************************************/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estruturas
typedef struct PilhaNo pilhaNo;

typedef struct
{
	int cod_moto;
	char marca[50];
	char modelo[50];
	char cor;
	int cilindrada;
	char partida;
	char alimentacao;
	float capacidade_carga;
	float preco;
} Motocicleta;

typedef struct
{
	pilhaNo *topo;
} Pilha;

struct PilhaNo
{
	Motocicleta novaMoto;
	pilhaNo *prox;
};

//Declarando funcoes
Pilha *criarPilha();
Pilha * excluirPilha(Pilha *);
int push(Pilha *, Motocicleta);
void verTopo(Pilha *);
int pop(Pilha *);
int ehVazia(Pilha *);
int salvarDados(Pilha *);
int carregarDados(Pilha *);





//Funcao main
int main ()
{


	int opc;
	char continuar = 's';
	Motocicleta novaMoto;
	Pilha *pilha = NULL;

	do
	{
		printf("\n1 - Criar Pilha");
		printf("\n2 - Inserir moto");
		printf("\n3 - Exibir topo da pilha");
		printf("\n4 - Remover Registro da Moto");
		printf("\n5 - Excluir lista de Motos");
		printf("\n6 - Verificar se a pilha esta vazia");
		printf("\n7 - Salvar dados");
		printf("\n8 - Carregar dados");
		printf("\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opc);
		getchar();

		switch(opc)
		{
		case 1:

			pilha = criarPilha();
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

			push(pilha, novaMoto);

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
		
		case 6:

			ehVazia(pilha);
			break;
		
		case 7:

			salvarDados(pilha);
			break;
		
		case 8:

			carregarDados(pilha);
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

/* Nome: cria pilha
 * Parametro: nenhum
 * Retorno: novaPiLHA - a pilha criada || NULL - quando nao consegue alocar o espaco 
 * Descricao: Funcao cria um espaço na memoria para estrutura de uma pilha.
 */
Pilha *criarPilha()
{

	//pede espaco na memorida do tamanho de uma pilha
	Pilha *novaPilha = (Pilha*)malloc(sizeof(Pilha));

	//verifica se o malloc conseguiu alocar espaco para a pilha
	if(novaPilha == NULL)
	{
		printf("Erro na alocacao de memoria");
		return NULL;
	}

	return novaPilha;
}

/* Nome: Excluir pilha
 * Parametro: Pilha - ponteiro que possui o endereco pilha
 * Retorno: NULL - caso consiga excuir a pilha || NULL - se não conseguir excuir a pilha
 * Descricao: funcao desaloca da memoria o espaco da pilha;
 */
Pilha *excluirPilha(Pilha *pilha)
{
	//definição de variaveis
    pilhaNo *p;
    pilhaNo *ref;

	//verifica se a pilha existe
	if(pilha == NULL)
	{
		printf("\nA Pilha nunca existiu...");
		return NULL;
	}

	//percorre a pilha
	for(p = pilha->topo; p->prox != NULL; p = p->prox){
        
        //garda um valor
        ref = p;
        //depois libera
        free(ref);
    }

	///libera o espaco da pilha
	free(pilha);

	//informa que exluiu a pilha
	printf("\nPilha de Motos excluida com sucesso...");

	//retorna NULL se conseguiu excluir a pilha
	return NULL;
}

/* Nome: push
 * Parametro: Pilha - ponteiro que possui o endereco pilha/ motocicleta - struct com informacoes do objeto
 * Retorno: 1 - para quando consegue inserir elemento na pilha || 0 - quando nao consegue inserir elemento na pilha
 * Descricao: Funcao insere valores no topo da pilha;
 */
int push(Pilha *pilha, Motocicleta novaMoto)
{
	pilhaNo *novoEspaco = (pilhaNo*)malloc(sizeof(pilhaNo));
	//verifica se a pilha foi criada
	if(pilha == NULL)
	{
		printf("\nA Pilha nao foi criada\n");
		return 0;
	}

	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	//verifica se a pilha esta vazia
	if(pilha->topo == NULL){
		//adiciona um elemento a pilha
		pilha->topo = novoEspaco;
		return 1;
	}
	//faz o novo elemento apontar pra o elemento do topo
	novoEspaco->prox = pilha->topo;
	//faz pilha topo apontar para o novo elemento
	pilha->topo = novoEspaco;
	
	return 1;
}

/* Nome: verTopo
 * Parametro: Pilha - ponteiro que possui o endereco pilha
 * Retorno: void
 * Descricao: Funcao pecorre os elementos da pilha e exibe o que esta no topo;
 */
void verTopo(Pilha *pilha)
{
	//verificando se a pilha foi criada
	if(pilha == NULL)
	{
		printf("\nA pilha nao foi criada");
	}
	//verificando se a pilha esta vazia
	if(pilha->topo == NULL)
	{
		printf("\nPilha vazia");
	}	

	printf("Codigo: %d\n", pilha->topo->novaMoto.cod_moto);
	printf("Marca: %s\n", pilha->topo->novaMoto.marca);
	printf("Modelo: %s\n", pilha->topo->novaMoto.modelo);
	printf("Cor: %c\n", pilha->topo->novaMoto.cor);
	printf("Cilindrada: %d\n", pilha->topo->novaMoto.cilindrada);
	printf("Partida: %c\n", pilha->topo->novaMoto.partida);
	printf("Alimentacao: %c\n", pilha->topo->novaMoto.alimentacao);
	printf("Carga: %.1f kg\n", pilha->topo->novaMoto.capacidade_carga);
	printf("Preco: R$ %.2f\n", pilha->topo->novaMoto.preco);
		
}

/* Nome: pop
 * Parametro: PIlha - ponteiro que possui o endereco pilha
 * Retorno: 1 - para quando consegue remover elemento do topo da pilha || 0 - quando não consegue remover elemento do topo da pilha
 * Descricao: Funcao remove elementos do topo da pilha;
 */
int pop(Pilha *pilha)
{
	
	pilhaNo *p, *ref;

	//verifica se a lista foi criada
	if(pilha == NULL)
	{
		printf("\nA Pilha nao foi criada...\n");
		return 0;
	}
	

	//guarda o elemento por referencia
	ref = p;
	//pilha topo aponta para o elemento abaixo do topo da pilha
	pilha->topo = pilha->topo->prox;
	//libera o elemento no topo da pilha
	free(ref);
	
	return 0;
}

/* Nome: ehVazia
 * Parametro: Pilha - ponteiro que possui o endereco pilha
 * Retorno: 1 - para indicar que a pilha esta vazia || 0 - quando a pilha tem algum elemento
 * Descricao: Funcao verifica se a pilha possui algum elemento ou nao;
 */
int ehVazia(Pilha *pilha){
	
	//declarando variaveis
	int contador = 0;
	pilhaNo *p;

	//verifica se a pilha existe
	if(pilha == NULL)
	{
		printf("\nA pilha nao foi criada");
		return 1;
	}
	
	//verifica se a pilha e vazia
	if(pilha->topo == 0)
	{
		printf("\nPilha vazia");
		return 1;
	}else{
		
		//percorre a pilha contando os elementos
		for(p = pilha->topo; p != NULL; p = p->prox){
			contador = contador + 1;
		}
		
		printf("A pilha nao esta vazia e possui %d elementos", contador);
		return 0;
	}	
	
	
	return 1;
}

/* Nome: salvarDados
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - para quando salva os dados || 0 - quando não consegue salvar os dados
 * Descricao: Funcao cria um documento ".txt" e insere/salva nele as informações
 * 			  que estavam na memória do programa em execução.
 */
int salvarDados(Pilha* pilha)
{
	//declaracao de variaveis
	pilhaNo *p;

	//verifica se a lista existe 
	if(pilha == NULL)
	{
		printf("\nA Pilha nao foi criada");
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
	for(p = pilha->topo; p != NULL; p = p->prox)
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
 * Parametro: lista - ponteiro que possui o endereco lista
 * Retorno: 1 - quando carrega os dados na memoria do programa em execucao || 0 - caso contrario
 * Descricao: Funcao criada para carregar os dados de um documento ".txt" para a memoria
 * 			  programa em execucao
 */
int carregarDados(Pilha *pilha)
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
			push(pilha, registroMoto);	
		}	
	
	}

	//fecha a operacao do arquivo
	fclose(arquivo);
	printf("\n\nDados carregados com sucesso...");
	//retorna 1 se o aquivo conseguir carregar os dados na memoria
	return 1;
}



