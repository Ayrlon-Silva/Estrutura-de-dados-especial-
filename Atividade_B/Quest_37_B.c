#include <stdio.h>

int main(){
    int dias;

    //entrada 
    printf("Idade em dias : ");
    scanf("%d", &dias);

    //processamento
    int idade_em_anos = dias / 365;
    int idade_em_meses = (dias % 365) / 30;
    int dias_restantes = (dias % 365) % 30;

    //saida
    printf("%d dias equivalem a %d anos, %d meses e %d dias de idade.\n", dias, idade_em_anos, idade_em_meses, dias_restantes);

    return 0;
}