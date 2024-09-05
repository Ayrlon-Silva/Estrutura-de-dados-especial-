#include <stdio.h>

int main(){
    float lado_quadrado;

    //entrada
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado_quadrado);

    //processamento
    float area_quadrado = lado_quadrado * lado_quadrado;

    //saida
    printf("Area do quadrado : %.2f.\n", area_quadrado);

    return 0;
}