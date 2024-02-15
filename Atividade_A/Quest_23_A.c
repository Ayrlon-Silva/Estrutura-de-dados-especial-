#include <stdio.h>

int main(){
    float Valor_em_kg;

    //entrada
    printf("Valor em kg: ");
    scanf("%f", &Valor_em_kg);

    //processamento
    float Valor_em_gramas = Valor_em_kg * 10000;

    //saida
    printf("%.1f Kg equivalem a %.1f g.\n", Valor_em_kg, Valor_em_gramas);

    return 0;
}