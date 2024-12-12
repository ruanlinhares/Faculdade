/****************************************************************** 
 * Nome: Lista simplesmente encadeada com apontadores     	      *
 * Descricao: Implementacao de lista com uso de ponteiros.		  *
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
 ******************************************************************/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Estruturas
typedef struct ListaNo listaNo;

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
	listaNo *prim;
} Lista;

struct ListaNo
{
	Motocicleta novaMoto;
	listaNo *prox;
};

//Declarando funções
Lista *criarLista();
int imprimirElementos(Lista *);
int inserirElemento(Lista *, Motocicleta);
int inserirElementoPosi(Lista *, Motocicleta, int);
int inserirElementoInicio(Lista *, Motocicleta);
int buscarElemento(Lista *, int);
int removerElemento(Lista *, int);
Lista * excluirLista(Lista*);
int atualizarElementos(Lista*, Motocicleta, int);
int qtdElementosLista(Lista *);
int salvarDados(Lista *);
int carregarDados(Lista *);


//Função main
int main ()
{
	int opc;
	int cod_busca;
	char continuar = 's';
	Motocicleta novaMoto;


	Lista *lista = NULL;

	do
	{
		printf("========MOTOROAD========");
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
		scanf(" %d", &opc);

		switch(opc)
		{
		case 1:

			lista = criarLista();
			break;

		case 2:

			printf("\nInsira o código: ");
			scanf(" %d", &novaMoto.cod_moto);
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

			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);
			printf("\n\n");
			printf("Informe o codigo da moto que deseja inserir a nova moto: ");
			scanf("%d", &cod_busca);

			inserirElementoPosi(lista, novaMoto, cod_busca);
			break;

		case 4:

			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
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
			printf("\nInsira o alimentacao: ");
			scanf(" %c", &novaMoto.alimentacao);
			printf("\nInsira o carga: ");
			scanf("%f", &novaMoto.capacidade_carga);
			printf("\nInsira o preco: ");
			scanf("%f", &novaMoto.preco);

			inserirElementoInicio(lista, novaMoto);
			break;

		case 5 :

			imprimirElementos(lista);
			break;

		case 6:

			
			printf("\nDigite o codigo da moto: ");
			scanf(" %d", &cod_busca);
			buscarElemento(lista, cod_busca);
			break;

		case 7:

			
			printf("\nInsira o codigo da moto que deseja remover: ");
			scanf(" %d", &cod_busca);
			removerElemento(lista, cod_busca);
			break;

		case 8:

			lista = excluirLista(lista);
			break;

		case 9:

			
			printf("\nInsira o código da moto que deseja atualizar: ");
			scanf(" %d", &cod_busca);
			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
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

//Funções

/*FUNÇÃO CRIAR LISTA - função feita para criar um espaço na memória para
armazenar os elemntos criados*/
Lista *criarLista()
{
	//Reserva espaço para um ponteiro do tipo lista;
	Lista *novaLista = (Lista*)malloc(sizeof(Lista));

	//Verifica se a lista existe;
	if(novaLista == NULL)
	{
		printf("\nErro na alocacao de memoria...");
		return NULL;
	}

	//Caso existir retorna o valor da nova lista e a armazena na variavel lista;
	return novaLista;
}

/*FUNÇÃO IMORIMIR ELEMENTOS - função implementada para percorrer os componentes
da lista e exibir os elementos*/
int imprimirElementos(Lista *lista)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;

	//Verifica se a lista existe;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;

	}
	//Verifica se a lista possui algum elemento;
	if(lista->prim == NULL){
			
		printf("\nLista vazia...");
		return 0;

	}

	/*Loop que acessa a posição atual de cada elemento e exibe o
	valor desse elemento*/
	for(p = lista->prim; p != NULL; p = p->prox){
		
		printf("\nCODIGO: %d", p->novaMoto.cod_moto);
		printf("\nMARCA: %s",  p->novaMoto.marca);
		printf("\nMODELO: %s", p->novaMoto.modelo);
		printf("\nCOR: %c", p->novaMoto.cor);
		printf("\nCILINDRADA: %d", p->novaMoto.cilindrada);
		printf("\nPARTIDA: %c", p->novaMoto.partida);
		printf("\nALIMENTACAO: %c", p->novaMoto.alimentacao);
		printf("\nCARGA: %.1f kg", p->novaMoto.capacidade_carga);
		printf("\nPRECO: R$%.2f", p->novaMoto.preco);
		printf("\n");
			
	}
	
	return 1;

}

/*FUNÇÃO INSERIR ELEMENTO - função implementada para adicionar elementos a lista
utilizando o sistema de ponteiros, onde cada elemento terá um ponteiro que apontará
para o próximo elemento*/
int inserirElemento(Lista *lista, Motocicleta novaMoto)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	//Criando espaço para armazenar o novo elemento e seu ponteiro, espaço do tamanho listaNo;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	//Verifica se a lista foi criada;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...\n");
		return 0;
	}

	//Atribui o valor inserido para o novo elemento e faz ele apontar para NULL;
	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL)
	{
		//Caso não, adiciona um elemento ao inicio da lista;
		lista->prim = novoEspaco;
		return 1;
	}

	//Loop percorre a lista procurando um elemento que aponte para NULL(no caso o último elemento);
	for(p = lista->prim; p->prox != NULL ; p = p->prox);

	//Faz elemento deixar de aponta para NULL e passar a apontar para o novo elemento;
	p->prox = novoEspaco;

	return 1;
}

/*FUNÇÃO INSERIR ELEMENTO POSIÇÃO - função implementada para inserir um elemento em uma posição
indicada pelo o usuário, a posição é indicada pelo código de registro da moto, o novo elemento
aponta para o elemento de código escolhido e faz o elemento anterior ao do código escolhido apontar
para o novo elemento ex: [ElemAterior]->[NovoElemen]->[ElemSelecionado]*/
int inserirElementoPosi(Lista *lista, Motocicleta novaMoto, int cod_busca)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	//Ponteiro criado para acessar uma posição anterior de *p durante o loop;
	listaNo *espacoAnterior;
	//Criando espaço para armazenar o novo elemento e seu ponteiro, espaço do tamanho listaNo;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	//Verifica se a lista foi criada;
	if(lista == NULL){
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//Atribui o valor inserido para o novo elemento e faz ele apontar para NULL;
	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL){
		//Caso não, adiciona um elemento ao inicio da lista;
		lista->prim = novoEspaco;
		return 1;
	}

	//Verifica se o código digitado é igual ao primeiro elemento da lista;
	if(lista->prim->novaMoto.cod_moto == cod_busca){
		
		//Se sim faz novo elemento apontar para o primeiro elemento;
		novoEspaco->prox = lista->prim;
		//depois sobrescreve o primeiro elemento pelo novo elemento;
		lista->prim = novoEspaco;
		
		return 1;
	}

	//Loop percorre a lista procurando um elemento que seja NULL;
	// obs:criei dois incrementos um com a posição atual de p e um com a posição anterior de p;
	for(p = lista->prim; p != NULL; espacoAnterior = p , p = p->prox){
				
		//verifica se o elemento digitado é igual a os elementos percorridos;
		if(cod_busca == p->novaMoto.cod_moto){
			//se sim faz o novo elemento apontar para o elemento atual;
			novoEspaco->prox = p;
			//Faz o elemento anterior a p apontar para o novo elemento;
			espacoAnterior->prox = novoEspaco;
			
			return 1;
		}
		
	}

	return 0;
}

/*FUNÇÃO INSERIR ELEMENTO inicio - função implementada para inserir um elemento no inicio da lista*/
int inserirElementoInicio(Lista * lista, Motocicleta novaMoto)
{
	//Ponteiro criado para acessar a posição do elemento;
	listaNo *p;
	//Ponteiro criado para acessar uma posição anterior de *p durante o loop;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	//Verifica se a lista foi criada;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//Atribui o valor inserido para o novo elemento e faz ele apontar para NULL;
	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL)
	{
		//Caso não, adiciona um elemento ao inicio da lista;
		lista->prim = novoEspaco;
		return 1;
	}

	//p guarda o nosso antifo primeiro elemento;
 	p = lista->prim;
	//lista->prim aponta para o novo elemento;
 	lista->prim = novoEspaco;
	//guardamos p no prox de lista->prim que agora é o novo elemento;
	//fazendo o novo elemento apontar para o antigo;
 	lista->prim->prox = p;

	return 1;
}

/*FUNÇÃO BUSCAR ELEMENTO - função implementada para localizar um elemento pelo seu código
e exibi-lo*/

int buscarElemento(Lista *lista, int cod_busca)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	
	//Verifica se a lista foi criada;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//Loop percorre a lista procurando um elemento que seja NULL;
	for(p = lista->prim; p != NULL; p = p->prox)
	{
		//Verifica se a lista está vazia;
		if(lista->prim == NULL){
			
			printf("\nLista vazia...");
			return 0;

		}else{
			//Verifica se o código digitado pertence a algum elemento exitente na lista;
			if(cod_busca == p->novaMoto.cod_moto){
			
				printf("\nCODIGO: %d", p->novaMoto.cod_moto);
				printf("\nMARCA: %s",  p->novaMoto.marca);
				printf("MODELO: %s", p->novaMoto.modelo);
				printf("COR: %c", p->novaMoto.cor);
				printf("\nCILINDRADA: %d", p->novaMoto.cilindrada);
				printf("\nPARTIDA: %c", p->novaMoto.partida);
				printf("\nALIMENTACAO: %c", p->novaMoto.alimentacao);
				printf("\nCARGA: %.1f kg", p->novaMoto.capacidade_carga);
				printf("\nPRECO: R$%.2f", p->novaMoto.preco);
				printf("\n");
				return 1;
			}
		}
	}

	//Se o código não foi encontrado é exibida essa mensagem;
	printf("\nCodigo da moto nao encontrado...");
	return 0;
}

/*FUNÇÃO REMOVER ELEMENTO - função implementada para remover um elemento em qualquer posição
indicada pelo seu código*/
int removerElemento(Lista *lista, int cod_busca)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	//Ponteiro criado para acessar uma posição anterior de *p durante o loop;
	listaNo *espacoAnterior;
	//ponteiro criado para armazenar um valor para liberar seu espaço de memoria;
	listaNo *ref;

	//Verifica se a lista foi criada;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//verifica se a lista está vazia;
	if(lista->prim == NULL){
		
		printf("\nA lista está vazia...");
		return 1;
	}

	//verifica se o elemento procurado está na primeira posição para remove-lo
	if(lista->prim->novaMoto.cod_moto == cod_busca){
		//guarda o elemento em ref;
		ref = lista->prim;
		//faz lista->prim apontar para o elemento seguinte do lista->prim anterior;
		lista->prim = lista->prim->prox;
		//libera o antigo valor de lista->prim;
		free(ref);
		
		return 1;
	}

	//percorre todos os elementos da lista;
	//pegamos o elemento atual e a posição do elemento anterior a ele; 
	for(p = lista->prim; p != NULL; espacoAnterior = p , p = p->prox){
				
		//verifica se o elemnto buscado existe na lista	
		if(cod_busca == p->novaMoto.cod_moto){

			//guarda a referencia do elemento atual;
			ref = p;
			//faz o elemento anterior ao atual apontar para o elemento depois do atual;
			espacoAnterior->prox = p->prox;
			//libera o espaço do elemento atual;
			free(ref);

			return 1;
		}
		
	}
	
	//se o elemento não exitir essa mesagem é exbida;
	printf("\nCodigo da moto nao encontrado...");
	return 0;
}

/*FUNÇÃO EXCLUIR LISTA - função percorre a lista liberando espaço na de cada elemento
depois libera o espaço da própria lista */
Lista *excluirLista(Lista *lista)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	//ponteiro criado para armazenar um valor para liberar seu espaço na memoria;
	listaNo *ref;

	//verifica se a lista existe;
	if(lista == NULL)
	{
		printf("\nA lista nunca existiu...");
		return NULL;
	}

	//percorre todos os elementos da lista;	
	for(p = lista->prim; p != NULL; p = p->prox){
		//guarda p em ref
		ref = p;
		//libera da memoria o conteudo de ref;
		free(ref);
	}
	
	//libera o espaço da lista
	free(lista);

	//informa que todo o espaço foi liberodo excluindo a lista;
	printf("\nLista de Motos excluida com sucesso...");

	return NULL;

}


/*FUNCÃO ATUALIZAR ELEMETOS - função implementada para atualizar o conteudo de um elemento*/
int atualizarElementos(Lista *lista,  Motocicleta novaMoto, int cod_busca)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;

	//verifica se a lista foi criada;
	if (lista == NULL)
	{
		printf("\nA lista não foi criada...");
		return 0;
	}

	//verifica se o elemento buscado está na primeira posição;
	if(lista->prim->novaMoto.cod_moto == cod_busca){
		//sobrescreve o valor antigo pelo novo valor;
		lista->prim->novaMoto = novaMoto;
		return 1;
	}
	
	//percorre os elementos da lista;
	for(p = lista->prim; p != NULL; p = p->prox){
				
		//verifica se o elemento digitado existe na lista;
		if(cod_busca == p->novaMoto.cod_moto){
			//se existir atualiza o valor do elemento atual pelo novo valor;
			p->novaMoto = novaMoto;
			
			return 1;
		}
		
	}

	//caso nao encotre o código da moto essa mensagem é exibida;
	printf("\nCodigo da moto nao encontrado...");
	return 0;
}

/*FUNÇÃO QUANTIDADE DE ELEMENTOS - função implementada para contar a 
de elementos da lista*/
int qtdElementosLista(Lista *lista)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;
	//contador criado para armazenar a quantidade de elementos;
	int contador;

	//verifica se a lista foi criada;
	if (lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//loop que percorre os elementos da lista;
	for(p = lista->prim; p != NULL; p = p->prox){
		//cada vez que o loop rodar para achar um elemento o contador soma 1 a quantidade;
		contador +=1;
	}

	printf("\nA lista atualmente possui %d elementos", contador);
	return 1;
}

/*FUNÇÃO SALVAR DADOS - função implementada para salvar os registros
de elemntos que estavam na memoria em um arquivo txt*/
int salvarDados(Lista* lista)
{
	listaNo *p;

	//verifica se a lista existe 
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada");
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
	for(p = lista->prim; p != NULL; p = p->prox)
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

	printf("\nDados salvos com sucesso...");
	
	//retorna 1 se os dados foram salvos 
	return 1;
}

/*FUNÇÃO CARREGAR DADOS - funçãoi implementada para carregar os registros de elementos
que foram gravados em um arquivo e exibir*/
int carregarDados(Lista *lista)
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
			inserirElemento(lista, registroMoto);	
		}	
	
	}

	//fecha a operacao do arquivo
	fclose(arquivo);
	printf("\n\nDados carregados com sucesso...");
	//retorna 1 se o aquivo conseguir carregar os dados na memoria
	return 1;
}


