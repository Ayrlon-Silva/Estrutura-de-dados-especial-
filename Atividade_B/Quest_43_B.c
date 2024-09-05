#include <stdio.h>

int main(){
    int a, b, c, d, e, f;

    //entrada
    printf("Valor de a : ");
    scanf("%d", &a);

    printf("Valor de b : ");
    scanf("%d", &b);

    printf("Valor de c : ");
    scanf("%d", &c);

    printf("Valor de d : ");
    scanf("%d", &d);

    printf("Valor de e : ");
    scanf("%d", &e);

    printf("Valor de f : ");
    scanf("%d", &f);

    //processamento
    float x = (c * e - b * f) / (a * e - b * d);
    float y = (a * f - c * d) / (a * e - b * d);


    //saida
    printf("Valor de X : %.1f.\n", x);
    printf("Valor de Y : %.1f.\n", y);
    
    return 0;
}