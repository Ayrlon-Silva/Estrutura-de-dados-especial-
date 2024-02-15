#include <stdio.h>

int main(){
    float num_1,num_2;

    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%f", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num_2);

    //processamento
    float soma_dos_numeros = num_1 + num_2;
    float subtracao_dos_sumeros = num_1 - num_2;

    float divisao = soma_dos_numeros / subtracao_dos_sumeros;

    //saida
    printf("Divisão da soma pela subtração dos numeros lidos : %.1f.\n", divisao);

    return 0;
}