#include "pilhas_vet.h"
#include <stdio.h>

int main(){
    Stack* p = new_stack();

    show_stack(p, "pilha");
    printf("\n");
    int v = pop(p);

    printf("\nV : %d \n", v);

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);
    push(p, 5);
    push(p, 6);
    show_stack(p, "pilha");
    
    push(p, 7);
    printf("\n");
    show_stack(p, "pilha");

    int f = pop(p);

    printf("\nV : %d \n", f);

    show_stack(p, "pilha");

    return 0;
}