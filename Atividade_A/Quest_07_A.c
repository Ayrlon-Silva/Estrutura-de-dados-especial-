#include <stdio.h>

int main(){
    int num_1,num_2,num_3;

    //entrada 
    printf("Digite o primeiro numero : ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero : ");
    scanf("%d", &num_2);
    printf("Digite o terceiro numero : ");
    scanf("%d", &num_3);

    //processamento
    int soma_dos_primeiros = num_1 + num_2;
    int diferenca_dos_ultimos = num_2 - num_3;

    //saida
    printf("Soma dos 2 primeiros: %d, Diferença dos 2 ultimos: %d.\n", soma_dos_primeiros, diferenca_dos_ultimos);

    return 0;
}