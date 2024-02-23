#include <stdio.h>

int main(){
    int anos,meses,dias;

    //entrada 
    printf("Anos : ");
    scanf("%d", &anos);
    printf("Meses : ");
    scanf("%d", &meses);
    printf("Dias : ");
    scanf("%d", &dias);

    //processamento
    int anos_em_dias = anos * 365;
    int meses_em_dias = meses * 30;

    int dias_totais = anos_em_dias + meses_em_dias + dias;

    //saida
    printf("%d anos, %d meses e %d dias equivalem a : %d dias totais.\n", anos, meses, dias, dias_totais);

    return 0;
}