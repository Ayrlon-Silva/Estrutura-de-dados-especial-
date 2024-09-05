#include <stdio.h>

int main(){
    int metros;

    //entrada
    printf("Digite um valor em metros : ");
    scanf("%d", &metros);

    //processamento
    int valor_KM = metros / 1000;
    int valor_M = metros % 1000;

    //saida
    printf("%d metros equivalem a %d Km e %d metros.\n", metros, valor_KM, valor_M);

    return 0;
}