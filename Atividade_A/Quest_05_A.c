#include <stdio.h>

int arredondar(float n){
    int f = n;
    return f;
}

int main(){
    int numero;

    //entrada
    printf("Digite um numero inteiro(3 digitos): ");
    scanf("%d", &numero);

    //processamento
    int centena = numero / 100;
    int dezena = (arredondar(numero / 10)) - (centena * 10);
    int unidade = numero % 10;

    int soma = centena + dezena + unidade;

    //saida
    printf("A soma dos elementos do numero %d é : %d\n", numero, soma);

    return 0;
}