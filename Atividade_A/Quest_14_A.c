#include <stdio.h>

int main(){
    float nota1,nota2,nota3;
    float peso1,peso2,peso3;

    //entrada
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Peso 1: ");
    scanf("%f", &peso1);

    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Peso 2: ");
    scanf("%f", &peso2);

    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Peso 3: ");
    scanf("%f", &peso3);

    //processamento
    float media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("Media ponderada : %.2f.\n", media_ponderada);

    return 0;
}