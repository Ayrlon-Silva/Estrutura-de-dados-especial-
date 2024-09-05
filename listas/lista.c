#include <stdio.h>
#include "lista.h"
#include <stdlib.h>

Lista * nova_Lista(){
    /*Lista * novaLista;
    novaLista = (Lista *) malloc(sizeof(Lista));*/

    return NULL;
}

Lista * inserir_no_inicio(Lista * lista, int valor){
    Lista * novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = valor;
    novo->prox = lista;

    return novo;
}

Lista * inserir_no_final(Lista * lista, int valor){
    if(esta_vazia(lista)){
        return inserir_no_inicio(lista, valor);
    }


    Lista * novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = valor;

    Lista * ultimo = lista;
    while(ultimo->prox != NULL){
        ultimo = ultimo->prox;
    }

    ultimo->prox = novo;
    novo->prox = NULL;

    return ultimo;
}

int esta_vazia(Lista * lista){
    if(lista == NULL){
        return 1;
    }
    return 0;
}

void listar(Lista * lista){
    printf(">> ITENS DA LISTA <<\n");
    if (esta_vazia(lista)) {
        printf("!!! Lista Vazia !!!\n\n");
        return;
    }
    Lista * p = lista;
    while(p->prox != NULL){
        printf("valor : %d \n", p->valor);
        p = p->prox;
    }
     printf("--------------------\n");
}

void listar_recursivo(Lista * lista){
    Lista * p = lista;

    if(p == NULL){
        return ;
    }
    printf("valor : %d \n", p->valor);
    listar_recursivo(p->prox);
}
