#include <stdio.h>

int main(){
    int numero;

    //entrada
    printf("Digite um numero inteiro (3 digitos): ");
    scanf("%d", &numero);

    //processamento
    int centena = numero / 100;
    int dezena = (numero / 10) - (centena * 10);
    int unidade = numero % 10;

    int Inverso = (unidade * 100) + (dezena * 10) + (centena);

    int soma = numero + Inverso;

    //saida
    printf("Resultado: %d + %d = %d.\n", numero, Inverso, soma);

    return 0;
}