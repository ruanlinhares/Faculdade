
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	listaNo *ult;
} Lista;

struct ListaNo
{
	Motocicleta novaMoto;
	listaNo *prox;
	listaNo *ant;
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
int inverterLista(Lista *);


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
		printf("\n13 - Inverter Lista");


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

			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
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
			printf("\n\n");
			printf("Informe o código da moto que deseja inserir a nova moto: ");
			scanf("%d", &cod_busca);

			inserirElementoPosi(lista, novaMoto, cod_busca);
			break;

		case 4:

			printf("\nInsira o codigo: ");
			scanf(" %d", &novaMoto.cod_moto);
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
		
		case 13:
		    
		    inverterLista(lista);
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

/*FUNÇÃO IMPRIMIR ELEMENTOS - função implementada para percorrer os componentes
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
		printf("MODELO: %s", p->novaMoto.modelo);
		printf("COR: %c", p->novaMoto.cor);
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
	novoEspaco->ant = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL)
	{
		//Caso não, adiciona um elemento ao inicio da lista;
		lista->prim = novoEspaco;
		lista->ult = novoEspaco;
		return 1;
	}

	//Loop percorre a lista procurando um elemento que aponte para NULL(no caso o último elemento);
	for(p = lista->prim; p->prox != NULL ; p = p->prox);

	//Faz elemento deixar de aponta para NULL e passar a apontar para o novo elemento;
	p->prox = novoEspaco;
	novoEspaco->ant = p;
	// faz lista ult apontar para cada ultimo elemnto adicionado;
	lista->ult = novoEspaco;

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
	listaNo* aux;
	//Ponteiro criado para acessar uma posição anterior de *p durante o loop;
	listaNo *espacoAnterior;
	//Criando espaço para armazenar o novo elemento e seu ponteiro, espaço do tamanho listaNo;
	listaNo *novoEspaco = (listaNo*)malloc(sizeof(listaNo));

	//Verifica se a lista foi criada;
	if(lista == NULL){
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//Atribui a informação das structs e seus ponteiros;
	novoEspaco->novaMoto = novaMoto;
	novoEspaco->prox = NULL;
	novoEspaco->ant = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL){
		//Caso não, adiciona um elemento ao inicio da lista;
		lista->prim = novoEspaco;
		lista->ult = novoEspaco;
		return 1;
	}

	//Verifica se o código digitado é igual ao primeiro elemento da lista;
	if(lista->prim->novaMoto.cod_moto == cod_busca){
		
		//Se sim faz novo elemento apontar para o primeiro elemento;
		aux = lista->prim;
		novoEspaco->prox = aux;
		//depois sobrescreve o primeiro elemento pelo novo elemento;
		lista->prim = novoEspaco;
		aux->ant = novoEspaco;
		return 1;
	}

	//Loop percorre a lista procurando um elemento que seja NULL;

	for(p = lista->prim; p != NULL; espacoAnterior = p , p = p->prox){
				
		//verifica se o elemento digitado é igual a os elementos percorridos;
		if(cod_busca == p->novaMoto.cod_moto){
			//se sim faz o novo elemento apontar para o elemento atual;
			novoEspaco->prox = p;
			p->ant = novoEspaco;
			//Faz o elemento anterior a p apontar para o novo elemento;
			espacoAnterior->prox = novoEspaco;
			novoEspaco->ant = espacoAnterior;
		}
	}

	return 1;
}

/*FUNÇÃO INSERIR ELEMENTO inicio - função implementada para inserir um elemento no inicio da lista*/
int inserirElementoInicio(Lista * lista, Motocicleta novaMoto)
{
	//Ponteiro criado para acessar a posição do elemento;
	listaNo *p;
	//variavel auxiliar para realizar operações;
	listaNo *aux;
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
	novoEspaco->ant = NULL;

	//Verifica se existe algum elemento na lista;
	if(lista->prim == NULL)
	{
		//Caso não, adiciona um elemento ao inicio da lista e define ele como ultimo elemento tambem;
		lista->prim = novoEspaco;
		lista->ult = novoEspaco;
		return 1;
	}

	//p guarda o nosso antigo primeiro elemento;
 	aux = lista->prim;
	//lista->prim aponta para o novo elemento;
 	lista->prim = novoEspaco;
	//guardamos p no prox de lista->prim que agora é o novo elemento;
 	lista->prim->prox = aux;
	//fazendo o elemento antigo apontar para o novo elemento;
 	aux->ant = lista->prim;
	//percorre a lista para achar o ultimo elemento e fazer lista ult a pontar para ele;
	for(p = lista->prim; p->prox != NULL ; p = p->prox);

	lista->ult = p;
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
	listaNo* j;
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
			p->prox->ant = espacoAnterior;
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
	free(lista->ult);
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
	int contador = 0;

	//verifica se a lista foi criada;
	if (lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//loop que percorre os elementos da lista;
	for(p = lista->prim; p != NULL; p = p->prox){
		//cada vez que o loop rodar para achar um elemento o contador soma 1 a quantidade;
		contador += 1;
	}

	printf("\nA lista atualmente possui %d elementos", contador);
	return 1;
}

/*FUNÇÃO SALVAR DADOS - função implementada para salvar os registros
de elemntos que estavam na memoria em um arquivo txt*/
int salvarDados(Lista* lista)
{
	//Ponteiro criado para acessar a posição do elemento durante o loop;
	listaNo *p;

	//verifica se a lista foi criada;
	if(lista == NULL)
	{
		printf("\nA lista nao foi criada...");
		return 0;
	}

	//abre um arquivo txt para escrita;
	FILE *arquivo = fopen("RegistroMotos.txt", "w");

	//verifica se o arquivo foi criado;
	if(arquivo == NULL)
	{
		printf("Erro ao abrir o aquivo...");
		return 0;
	}

	//percorre todos os elementos da lista;
	for(p = lista->prim; p != NULL; p = p->prox)
	{
		//usamos fprinf para gravar cada informação do valor do elemento atual;
		fprintf(arquivo, "\nCODIGO: %d", p->novaMoto.cod_moto);
		fprintf(arquivo, "\nMARCA: %s", p->novaMoto.marca);
		fprintf(arquivo, "MODELO: %s", p->novaMoto.modelo);
		fprintf(arquivo, "COR: %c", p->novaMoto.cor);
		fprintf(arquivo, "\nCILINDRADA: %d", p->novaMoto.cilindrada);
		fprintf(arquivo, "\nPARTIDA: %c", p->novaMoto.partida);
		fprintf(arquivo, "\nALIMENTACAO: %c", p->novaMoto.alimentacao);
		fprintf(arquivo, "\nCARGA: %.1f KG", p->novaMoto.capacidade_carga);
		fprintf(arquivo, "\nPRECO: R$ %.2f\n\n", p->novaMoto.preco);

	}
	
	//fecha o arquivo salvando as informações;
	fclose(arquivo);
	
	//mensagem de sucesso;
	printf("\nDados salvos com sucesso...");
	return 1;
}

/*FUNÇÃO CARREGAR DADOS - funçãoi implementada para carregar os registros de elementos
que foram gravados em um arquivo e exibir*/
int carregarDados(Lista *lista)
{

	//abre um aquivo txt no formato de leitura;
	FILE * arquivo = fopen("RegistroMotos.txt", "r");

	//verifica se o aquivo foi criado/aberto;
	if(arquivo == NULL)
	{
		printf("\nErro ao abrir o arquivo...");
		return 0;
	}

	//variavel que armazena cada linha do arquivo;
	char registro[100];
	//loop para percorrer cada linha do arquivo até que seja NULL;
	while(fgets(registro, 100, arquivo) != NULL)
	{
		//imprime na tela cada linha do arquivo;
		printf("%s", registro);
	}
	
	//fecha o arquivo salvando as informações;
	fclose(arquivo);
	//mensagem de sucesso;
	printf("\n\nDados carregados com sucesso...");
	return 1;
}

/*FUNÇÃO INVERTER LISTA - implementada para inverter a ordem de fluxo da LISTA
e testar se ela é duplamente ligada*/
int inverterLista(Lista *lista){
    
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
	//nao considera o elemeto que é == a lista->prim;
	
	for(p = lista->ult; p != NULL; p = p->ant){
		
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

	}

	return 1;
}
