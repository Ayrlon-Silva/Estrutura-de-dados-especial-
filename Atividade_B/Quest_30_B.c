#include <stdio.h>

int main(){
    int minutos;

    //entrada
    printf("Digite um numero inteiro de minutos : ");
    scanf("%d", &minutos);

    //processamento
    int dias = minutos / 1440;
    int horas = ((minutos % 1440)  / 60);
    int minutos_rest = (((minutos % 1440)  % 60));

    //saida
    printf("%d minutos equivalem a %d dias, %d horas e %d minutos.\n", minutos, dias, horas, minutos_rest);

    return 0;
}