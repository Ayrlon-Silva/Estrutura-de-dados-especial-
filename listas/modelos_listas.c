#include <stdio.h>
#include <stdlib.h>


typedef struct lista {
  int info;
  struct lista* prox;
}Lista;


Lista* inicializa (void) {
return NULL;
}


Lista* insere (Lista* l, int i) {
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->info = i;
  novo->prox = l;
  return novo;
}


int igual (Lista* l1, Lista* l2){
  while(l1 != NULL || l2 != NULL){
    if(l1->info != l2 ->info){
      return 0;
    }


    l1 = l1->prox;
    l2 = l2->prox;
  }


  return 1;
}


Lista* copia (Lista* l) {
  Lista* copia;
 
  copia = l;


  return copia;
}


void imprime (Lista* l) {
  Lista* p; /* variável auxiliar para percorrer a lista */
  for (p = l; p != NULL; p = p->prox)
  printf("info = %d \n", p->info);
}


int vazia (Lista* l) {
  return (l == NULL);
}


Lista* busca (Lista* l, int v) {
  Lista* p;
  for (p=l; p!=NULL; p=p->prox){
    if (p->info == v){
      return p;
    }
  }


  return NULL; /* não achou o elemento */
}


Lista* retira (Lista* l, int v) {
  Lista* ant = NULL; /* ponteiro para elemento anterior */
  Lista* p = l; /* ponteiro para percorrer a lista*/


  /* procura elemento na lista, guardando anterior */
  while (p != NULL && p->info != v) {
    ant = p;
    p = p->prox;
  }
  /* verifica se achou elemento */
  if (p == NULL){
  return l; /* não achou: retorna lista original */
  }
  /* retira elemento */
  if (ant == NULL) {
    /* retira elemento do inicio */
    l = p->prox;
  }
  else {
    /* retira elemento do meio da lista */
    ant->prox = p->prox;
  }
  free(p);
  return l;
}


void libera (Lista* l) {
  Lista* p = l;
  while (p != NULL) {
    Lista* t = p->prox; /* guarda referência para o próximo elemento*/


    free(p); /* libera a memória apontada por p */
    p = t; /* faz p apontar para o próximo */
  }
}


int main() {
  Lista* l; /* declara uma lista não iniciada */
  l = inicializa(); /* inicia lista vazia */
  l = insere(l, 23); /* insere na lista o elemento 23 */
  l = insere(l, 42); /* insere na lista o elemento 45 */
  l = insere(l, 56); /* insere na lista o elemento 56 */
  l = insere(l, 73); /* insere na lista o elemento 78 */
  imprime(l); /* imprimirá: 78 56 45 23 */


  printf("\n______________________\n");


  Lista* l2;
  l2 = copia(l);
  imprime(l2);
  /*


  Lista* l2;
  l2 = inicializa();
  l2 = insere(l2, 23);
  l2 = insere(l2, 42);
  l2 = insere(l2, 56);  
  l2 = insere(l2, 73);
  imprime(l2);  */




  if(igual(l, l2)){
    printf("\n são iguais \n");
  }
  else{
    printf("\n Não são iguais \n");
  }


  /*l = retira(l, 78);
  imprime(l);
  l = retira(l, 45);
  imprime(l);
  libera(l);*/


  return 0;
}
