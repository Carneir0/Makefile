#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funcoes.h"
#define TAM_MAX 9

/* 
    Menu principal da aplicação (a ser melhorado)
    Print das opções da aplicação, e scan da opção escolhida 
*/
int menu() {
    int opcao;
    printf("===== CONVERSOR BINARIO/DECIMAL =====\n\n");
    printf("Escolha uma opcao:\n1) Binario - Decimal\n2) Decimal - Binario\n0) Encerrar\n\nO: ");
    scanf("%d",&opcao);
    return opcao;
}

/*
    Processa a opção do usuário
*/
void processa(int opcao) {
    if(opcao == 1) {
        binDec();
    } else if(opcao == 2) {
        decBin();
    } else {
        exit(1);
    }
}

/* 
    Converte binário para decimal
    Tratar erros (numero nao binario,numero maior que o possível...) 
*/
void binDec() {
    char numBin[TAM_MAX];
    int numDec=0;
    int j;
    int i;

    printf("Numero binario: ");
    scanf("%s",numBin);

    j=strlen(numBin);
    for(i=0;i<(int)strlen(numBin);i++) {
        if(numBin[j-1] == '1') {
            numDec += (int)pow(2,i);
        }
        j--;
    }
    printf("Numero decimal: %d\n\n\n",numDec);
}

/*
    Converte decimal para binário
*/
void decBin() {
    int numDec;
    char numBin[TAM_MAX] = "00000000";
    int div;
    int index=7;

    printf("Numero decimal: ");
    scanf("%d",&numDec);
    div = numDec;

    if(numDec > 255) {
        exit(1);
    }

    while(div > 1) {
        numBin[index] = (div%2) + '0';
        index--;
        div = div/2;
    }
    numBin[index] = div + '0';

    printf("Numero binario: %s\n\n\n",numBin);
}