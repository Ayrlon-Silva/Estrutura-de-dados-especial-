#include <stdio.h>

int main(){
    int numero;

    //entrada
    printf("Digite um numero inteiro (4 digitos): ");
    scanf("%d", &numero);

    //processamento
    int milhar = numero / 1000;
    int centena = (numero % 1000) / 100;
    int dezena = ((numero % 100) % 100) / 10;
    int unidade = (((numero % 100) % 100) % 10);

    int soma_elementos = milhar + centena + dezena + unidade;

    //saida
    printf("Soma dos elementos : %d + %d + %d + %d = %d.\n", milhar, centena, dezena, unidade, soma_elementos);

    return 0;
}