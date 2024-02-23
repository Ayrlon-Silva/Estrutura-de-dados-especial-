#include <stdio.h>

int main(){
    float Latao;

    //entrada 
    printf("Latao (kg) : ");
    scanf("%f", &Latao);

    //processamento
    float cobre = Latao * 0.70;
    float zinco = Latao * 0.30;

    //saida
    printf("Para %.2f kg de latao sao necessarios : %.2f kg de cobre e %.2f kg de zinco.\n", Latao, cobre, zinco);

    return 0;
}