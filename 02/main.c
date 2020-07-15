#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    int opcao=1;

    while(opcao != 0) {
        opcao = menu();
        processa(opcao);
    }

    return 0;
}