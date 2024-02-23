#include <stdio.h>

int main(){
    float custo_de_fabrica;

    //entrada 
    printf("Custo de fabrica : ");
    scanf("%f", &custo_de_fabrica);

    //processamento
    float distribuidor = custo_de_fabrica * 0.28;
    float impostos = custo_de_fabrica * 0.45;

    float custo_ao_consumidor = custo_de_fabrica + distribuidor + impostos;

    //saida
    printf("Porcentagem do distribuidor (28): %.2f R$.\n", distribuidor);
    printf("Porcentagem de impostos (45): %.2f R$.\n", impostos);
    printf("Custo total ao consumidor : %.2f R$.\n", custo_ao_consumidor);

    return 0;
}