#include <stdio.h>

int main(){
    float valor_do_dolar;
    float valor_em_dolar;

    //entrada
    printf("Digite o valor do dolar : ");
    scanf("%f", &valor_do_dolar);
    printf("Digite o valor em dolar : ");
    scanf("%f", &valor_em_dolar);

    //processamento
    float valor_em_real = valor_em_dolar * valor_do_dolar;

    //saida
    printf("%.2f Dolares equivalem a %.2f Reais.\n", valor_em_dolar, valor_em_real);

    return 0;
}