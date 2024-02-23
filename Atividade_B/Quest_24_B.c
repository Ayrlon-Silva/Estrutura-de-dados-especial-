#include <stdio.h>

int main(){
    float metros;

    //entrada
    printf("Digite um valor em metros : ");
    scanf("%f", &metros);

    //processamento
    float centimetros = metros * 100;

    //saida
    printf("%.2f metros equivalem a %.2f centimetros.\n", metros, centimetros);

    return 0;
}