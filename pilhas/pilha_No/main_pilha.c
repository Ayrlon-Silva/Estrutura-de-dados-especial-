#include <stdio.h>
#include "pilha.h"

int main(){
    Pilha* p = new_Pilha();
  
    print(p);
    printf("\n");
    int v;
    v = pop(p);

    printf("\nV : %d \n", v);

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);
    push(p, 5);
    push(p, 6);
    print(p);

    int qtd = lenght(p);
    printf("\n qtd: %d", qtd);

    push(p, 7);
    printf("\n");
    qtd = lenght(p);
    printf("\n qtd: %d", qtd);
    print(p);

    int f = pop(p);
    printf("\n f: %d", f);

    qtd = lenght(p);
    printf("\n qtd: %d", qtd);

    print(p);

    return 0;
}