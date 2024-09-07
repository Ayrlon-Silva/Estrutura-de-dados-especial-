 #include <stdio.h>
 #include "pilha.h"
 #include <stdlib.h>

Pilha* new_Pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    p->tam_max = MAX;
    p->tam_atual = 0;

    return p;
}

Node* ins_inicio(Node* l, int v){
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->value = v;
    novo->next = l;

    return novo;
}

Node* ret_inicio(Node* l){
    Node* p = l->next;
    free(l);

    return p;
}

void push(Pilha* p, int v){
    if(full(p)){
        printf("\n Pilha cheia !! \n");
        return;
    }

    p->topo = ins_inicio(p->topo, v);
    p->tam_atual = p->tam_atual + 1;
}

int pop(Pilha* p){
    if(empty(p)){
        printf("\n Pilha vazia !! \n");
        return ((int)NULL);
    }

    int v = p->topo->value;
    p->topo = ret_inicio(p->topo);
    p->tam_atual = p->tam_atual - 1;
    return v;
}

int empty(Pilha* p){
    return p->tam_atual == 0;
}

int full(Pilha* p){
    return p->tam_atual == p->tam_max;
}

void print(Pilha* p){
    printf("\n Pilha : ");

    if(empty(p)){
        printf("\n Pilha vazia !! \n");
        return;
    }

    Node* q = p->topo;
    while(q != NULL){
        printf("%d |", q->value);
        q = q->next;
    }
}

void libera(Pilha* p){
    Node* q = p->topo;

    while(q != NULL){
        Node* t = q->next;
        free(q);
        q = t;
    }

    free(p);
}

int lenght(Pilha *p){
  return p->tam_atual;
}