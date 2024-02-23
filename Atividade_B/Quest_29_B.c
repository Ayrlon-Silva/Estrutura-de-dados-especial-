#include <stdio.h>

int main(){
    int meses;

    //entrada
    printf("Digite um numero inteiro de meses : ");
    scanf("%d", &meses);

    //processamento
    int anos = meses / 12;
    int meses_rest = meses % 12;

    //saida
    printf("%d meses equivalem a %d anos e %d meses.\n", meses, anos, meses_rest);

    return 0;
}