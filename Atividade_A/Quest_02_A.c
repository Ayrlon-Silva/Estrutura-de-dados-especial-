#include <stdio.h>

int main(){
    int horas;
    int minutos;

    //entrada
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);

    //processamento
    int horas_em_minutos = horas * 60;
    int minutos_finais = horas_em_minutos + minutos;

    //saida
    printf("%d horas e %d minutos equivalem a %d minutos.\n", horas, minutos, minutos_finais);

    return 0;
}