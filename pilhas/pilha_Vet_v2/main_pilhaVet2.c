#include "pilhas_vet2.h"
#include <stdio.h>

int main() {
  Pilha* p = cria();
  
  show(p);
  printf("\n");
  int v = pop(p);

  printf("\nV : %d \n", v);

  push(p, 1);
  push(p, 2);
  push(p, 3);
  push(p, 4);
  push(p, 5);
  push(p, 6);
  show(p);

  int qtd = lenght(p);
  printf("\n qtd: %d", qtd);

  push(p, 7);
  printf("\n");
  qtd = lenght(p);
  printf("\n qtd: %d", qtd);
  show(p);

  int f = pop(p);

  qtd = lenght(p);
  printf("\n qtd: %d", qtd);

  return 0;
}