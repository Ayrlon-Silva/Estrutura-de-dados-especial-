#include <stdio.h>
#include <stdlib.h>
#include "Banco.h"

int main(){

    Conta * Contas = (Conta *) malloc(100 * sizeof(Conta));
    int qtdContas = 0;
    system("cls");

    int opcao;
    PrintMenu();
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            Contas[qtdContas] = abrir_conta();
            qtdContas++;
        }
        else if(opcao == 2){
            Acessar_conta(Contas, qtdContas);
        }
        else{
            printf("-> Opção invalida !!");
        }

        PrintMenu();
        scanf("%d", &opcao);
    }

    return 0;
}