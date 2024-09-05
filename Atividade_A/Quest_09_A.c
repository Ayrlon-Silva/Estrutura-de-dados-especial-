#include <stdio.h>

int main(){
    int num_a, num_b;

    //entrada
    printf("Digite o numero A: ");
    scanf("%d", &num_a);
    printf("Digite o numero b: ");
    scanf("%d", &num_b);

    //saida
    printf("Ordem inversa : (%d, %d).\n", num_b, num_a);

    return 0;
}