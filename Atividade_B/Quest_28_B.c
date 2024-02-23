#include <stdio.h>

int main(){
    int horas;

    //entrada
    printf("Digite um numero inteiro de horas : ");
    scanf("%d", &horas);

    //processamento
    int semanas = horas / 168;
    int dias = ((horas % 168)  / 24);
    int horas_rest = ((horas % 168)  % 24);

    //saida
    printf("%d horas equivalem a %d semanas, %d dias e %d horas.\n", horas, semanas, dias, horas_rest);

    return 0;
}