#include <stdio.h>

int main(){
    int dias;

    //entrada
    printf("Digite um numero de dias : ");
    scanf("%d", &dias);

    //processamento
    int semanas = dias / 7;
    int dias_restantes = dias % 7;

    //saida
    printf("%d dias equivalem a %d semanas e %d dias.\n", dias, semanas, dias_restantes);
    
    return 0;
}