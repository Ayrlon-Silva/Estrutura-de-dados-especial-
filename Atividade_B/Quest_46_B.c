#include <stdio.h>

int main(){
    int Valor_mercadoria;

    //entrada 
    printf("Valor da mercadoria : ");
    scanf("%d", &Valor_mercadoria);

    //processamento
    int valor_prestacoes = Valor_mercadoria / 3;
    float resto = Valor_mercadoria % 3;
    int valor_entrada = valor_prestacoes + resto;

    //saida
    printf("Entrada de : %d R$.\n", valor_entrada);
    printf("Com duas prestacoes de : %d R$.\n", valor_prestacoes);

    return 0;
}