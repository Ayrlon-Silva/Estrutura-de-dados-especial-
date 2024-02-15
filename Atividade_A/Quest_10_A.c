#include <stdio.h>

int main(){
    int num_1, num_2;

    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num_2);

    //processamento
    int quociente = num_1 / num_2;
    int resto = num_1 % num_2;

    //saida
    printf("Quociente : %d, Resto: %d.\n", quociente, resto);

    return 0;
}