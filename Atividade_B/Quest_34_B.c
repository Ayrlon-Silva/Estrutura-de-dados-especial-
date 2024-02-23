#include <stdio.h>

int main(){
    int num_1,num_2,num_3;

    //entrada 
    printf("Digite o primeiro numero : ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero : ");
    scanf("%d", &num_2);
    printf("Digite o terceiro numero : ");
    scanf("%d", &num_3);

    //processamento
    float media_numeros = (num_1 + num_2 + num_3) / 3;

    //saida
    printf("Media dos numeros lidos : %.2f.\n", media_numeros);

    return 0;
}