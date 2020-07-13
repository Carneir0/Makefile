#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funcoes.h"

int menu() {
    int opcao;
    printf("===== CONVERSOR BINARIO/DECIMAL =====\n\n\n");
    printf("Escolha uma opcao:\n1)Binario - Decimal\n2)Decimal - Binario\n\nO: ");
    scanf("%d",&opcao);
    return opcao;
}

void processa(int opcao) {
    if(opcao == 1) {
        binDec();
    } else {
        decBin();
    }
}

void binDec() {

}

void decBin() {
    
}