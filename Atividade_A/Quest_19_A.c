#include <stdio.h>

int main(){
    float raio;

    //entrada
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    //processamento
    float volume = (4 * 3.14 * (raio * raio * raio)) / 3;

    //saida
    printf("Volume da esfera : %.2f.\n", volume);

    return 0;
}