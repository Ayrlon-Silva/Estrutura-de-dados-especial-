#include <stdio.h>

int main(){
    float base, altura;

    //entrada
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    //processamento
    float area_retangulo = (base * altura);

    //saida
    printf("Area do retangulo : %.2f.\n", area_retangulo);

    return 0;
}