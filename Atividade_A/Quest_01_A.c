#include <stdio.h>

int main(){
    float velocidade_MS;

    //entrada
    printf("Digite a velocidade em m/s: ");
    scanf("%f",&velocidade_MS);

    //processamento
    float velocidade_KM = velocidade_MS * 3.6;

    //saida
    printf("%.1f m/s equivalem a %.1f km/h.\n",velocidade_MS,velocidade_KM);

    return 0;
}