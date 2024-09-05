#include <stdio.h>

int main(){
    int numero;

    //entrada
    printf("Digite um numero inteiro (3 digitos): ");
    scanf("%d", &numero);

    //processamento
    int centena = numero / 100;
    int dezena = ((int) (numero / 10)) - (centena * 10);
    int unidade = numero % 10;

    //saida
    printf("Inverso do numero: %d%d%d.\n", unidade, dezena, centena);

    return 0;
}