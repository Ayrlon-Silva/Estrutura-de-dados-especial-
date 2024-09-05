#include <stdio.h>

int main(){
    int valor_em_minutos;

    //entrada
    printf("Digite o valor em minutos: ");
    scanf("%d", &valor_em_minutos);

    //processamento
    int horas = valor_em_minutos / 60;
    int minutos = valor_em_minutos % 60;

    //saida
    printf("%d minutos equivalem a %d horas e %d minutos.\n", valor_em_minutos, horas, minutos);

    return 0;
}