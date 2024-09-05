#include <stdio.h>

int main(){
    float velocidade_KM;

    //entrada
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &velocidade_KM);

    //processamento
    float velocidade_MS = velocidade_KM / 3.6;

    //saida
    printf("%3.2f km/h equivalem %3.2f m/s.\n", velocidade_KM,velocidade_MS);

    return 0;
}