#include <stdio.h>

int main(){
    float raio;

    //entrada
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    //processamento
    float comprimento = 2 * 3.14 * raio;

    //saida
    printf("Comprimento da circunferencia : %.2f.\n", comprimento);

    return 0;
}