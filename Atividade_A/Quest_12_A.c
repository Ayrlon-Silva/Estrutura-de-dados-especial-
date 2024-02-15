#include <stdio.h>

int main(){
    float salario;

    //entrada
    printf("Salario: ");
    scanf("%f", &salario);

    //processamento
    float aumento = salario * 0.25;
    float novo_salario = salario + aumento;

    //saida
    printf("Novo salario com aumento: %.2f R$.\n", novo_salario);

    return 0;
}