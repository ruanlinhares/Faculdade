#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct Motocicleta{
    int id;
    char marca[10];
    char modelo[10];
    char cor;
    int cilindrada;
    char partida[1];
    char alimentação[1];
    float capacidade_carga;
    float preco;
} moto;

void criarMoto();

int main (){
    int opc;
    printf("MOTOROAD\n");
    printf("1 - Criar regitro da moto\n2 - Atualizar registro da moto\n3 - Excluir registro da moto");
    printf("Escolha uma opção:");
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            criarMoto();
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("Opcão inválida!! Opção escolhida não consta no sistema...");
            break;
    }
    return 0;
}

void criarMoto(){
    
}


