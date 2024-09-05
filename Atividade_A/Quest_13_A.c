#include <stdio.h>

int main(){
    float Valor_em_real;

    //entrada
    printf("Digite um valor em real (R$): ");
    scanf("%f", &Valor_em_real);

    //processamento
    float porcentagem_do_valor = Valor_em_real * 0.70;

    //saida
    printf("%.2f R$ corresponde a 70 porcento do valor digitado (%.2f R$).\n", porcentagem_do_valor, Valor_em_real);

    return 0;
}