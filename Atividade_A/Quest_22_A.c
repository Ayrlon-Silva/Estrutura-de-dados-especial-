#include <stdio.h>

int main(){
    float Valor_em_km;

    //entrada
    printf("Valor em km: ");
    scanf("%f", &Valor_em_km);

    //processamento
    float Valor_em_metros = Valor_em_km * 1000;

    //saida
    printf("%.1f Km equivalem a %.1f m.\n", Valor_em_km, Valor_em_metros);

    return 0;
}