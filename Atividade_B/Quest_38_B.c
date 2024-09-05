#include <stdio.h>

int main(){
    int numerador_1, denominador_1, numerador_2, denominador_2;

    //entrada
    printf("Digite o numerador da primeira fracao : ");
    scanf("%d", &numerador_1);
    printf("Digite o denominador da primeira fracao : ");
    scanf("%d", &denominador_1);

    printf("Digite o numerador da segunda fracao : ");
    scanf("%d", &numerador_2);
    printf("Digite o denominador da segunda fracao : ");
    scanf("%d", &denominador_2);

    //processamento
    int denominador = denominador_1 * denominador_2;

    int numerador = ((denominador / denominador_1) * numerador_1) + ((denominador / denominador_2) * numerador_2);

    //saida
    printf("Soma das fracoes : %d/%d.\n", numerador, denominador);
    
    return 0;
}