#include <stdio.h>

int main(){
    int Numero_binario;

    //entrada 
    printf("Digite um numero inteiro (4 digitos binarios) : ");
    scanf("%d", &Numero_binario);

    //processamento
    int digito_1 = Numero_binario % 10;
    int digito_2 = (Numero_binario % 100) / 10;
    int digito_3 = (Numero_binario % 1000) / 100;
    int digito_4 = (Numero_binario % 10000) / 1000;

    int numero_decimal = (digito_4 * 8) + (digito_3 * 4) + (digito_2 * 2) + digito_1;

    //saida
    printf("O numero binario : %d em decimal é : %d.\n", Numero_binario, numero_decimal);

    return 0;
}