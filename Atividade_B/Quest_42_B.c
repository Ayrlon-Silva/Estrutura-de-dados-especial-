#include <stdio.h>

int main(){
    int x1, y1, x2, y2;

    //entrada
    printf("Valor de x1 : ");
    scanf("%d", &x1);
    printf("Valor de y1 : ");
    scanf("%d", &y1);

    printf("Valor de x2 : ");
    scanf("%d", &x2);
    printf("Valor de y2 : ");
    scanf("%d", &y2);

    //processamento
    int distancia = ((x2*x2 - 2 * x2 * x1 + x1*x1) + (y2*y2 - 2 * y2 * y1 + y1*y1)) * (((x2*x2 - 2 * x2 * x1 + x1*x1) + (y2*y2 - 2 * y2 * y1 + y1*y1)) / 2);

    //saida
    printf("Distancia entre os pontos : %d.\n", distancia);
    
    return 0;
}