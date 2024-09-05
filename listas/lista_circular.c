#include <stdio.h>
#include <stdlib.h>

typedef struct lista_circular{
    int info;
    Lista* prox;
} Lista;

Lista* inicializa (void) {
return NULL;
}

int vazia (Lista* l) {
  return (l == NULL);
}

Lista* insere (Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    if(vazia){
        novo->prox = l;
        l->prox = l;
        return novo;
    }

    Lista* ultimo = l;

    while(ultimo->prox != l){
        ultimo = ultimo->prox;
    }

    ultimo->prox = novo;
    novo->prox = l;

    return novo;
}


void imprime(Lista * l){
    Lista* p = l;
    if(vazia){
        printf('\nLista vazia');
    }

    while(p != l){
        printf("%d \n", p->info);
        p = p->prox;
    }

}
int main(){

    Lista* l; /* declara uma lista não iniciada */
    l = inicializa(); /* inicia lista vazia */
    l = insere(l, 23); /* insere na lista o elemento 23 */
    l = insere(l, 42); /* insere na lista o elemento 45 */
    l = insere(l, 56); /* insere na lista o elemento 56 */
    l = insere(l, 73); /* insere na lista o elemento 78 */
    imprime(l); /* imprimirá: 78 56 45 23 */


    return 0;
}