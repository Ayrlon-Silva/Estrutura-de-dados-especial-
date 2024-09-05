#include <stdio.h>

int main(){
    float base, altura;

    //entrada
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    //processamento
    float area_triangulo = (base * altura) / 2;

    //saida
    printf("Area do triangulo : %.2f.\n", area_triangulo);

    return 0;
}