#include <stdio.h>

int main(){
    int num_A,num_B,num_C;

    //entrada 
    printf("Digite o numero A: ");
    scanf("%d", &num_A);
    printf("Digite o numero B: ");
    scanf("%d", &num_B);
    printf("Digite o numero C: ");
    scanf("%d", &num_C);

    //processamento
    float R = (num_A + num_B) * (num_A + num_B);

    float S = (num_B + num_C) * (num_B + num_C);

    float D = (R + S) / 2;

    //saida
    printf("Resultado da expressao (D) : %.2f.\n");

    return 0;
}