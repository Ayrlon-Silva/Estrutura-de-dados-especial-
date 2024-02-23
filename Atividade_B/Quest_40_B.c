#include <stdio.h>

int main(){
    int Anos_fumando, cigarros_dia;
    float preco_cigarro;

    //entrada 
    printf("Anos fumando: ");
    scanf("%d", &Anos_fumando);
    printf("Cigarros por dia: ");
    scanf("%d", &cigarros_dia);
    printf("Preco do cigarro: ");
    scanf("%f", &preco_cigarro);

    //processamento
    int dias_cartela = 20 / cigarros_dia;

    float valor_por_ano = (preco_cigarro * 365) / dias_cartela;

    float valor_gasto = valor_por_ano * Anos_fumando;

    //saida
    printf("Foram gastos %.2f reais em cigarros durante %d anos.\n", valor_gasto, Anos_fumando);

    return 0;
}