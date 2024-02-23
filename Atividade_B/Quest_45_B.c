#include <stdio.h>

int main(){
    int quantia;

    //entrada
    printf("Quantia solicitada: ");
    scanf("%d", &quantia);

    //processamento
    int qtd_notas100 = quantia / 100;

    int qtd_notas50 = (quantia % 100) / 50;

    //int qtd_notas20 = ((quantia % 100) % 50) / 20;

    int qtd_notas10 = ((quantia % 100) % 50) / 10;

    int qtd_notas5 = (((quantia % 100) % 50) % 10) / 5;

    int qtd_notas1 = ((((quantia % 100) % 50) % 10) % 5);

    printf("Notas de 100: %d.\n", qtd_notas100);
    printf("Notas de 50: %d.\n", qtd_notas50);
    //printf("Notas de 20: %d.\n", qtd_notas20);
    printf("Notas de 10: %d.\n", qtd_notas10);
    printf("Notas de 5: %d.\n", qtd_notas5);
    printf("Notas de 1: %d.\n", qtd_notas1);

    return 0;
}