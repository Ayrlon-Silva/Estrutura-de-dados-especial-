#include "rgb.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Torre* new_Torre(int max){
    Torre* p = (Torre*) malloc(sizeof(Torre));
    p->tam_max = max;
    p->topo = NULL;
    p->tam_atual = 0;

    return p;
}

No* ins_inicio(No* l, char v){
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = v;
    novo->prox = l;

    return novo;
}

No* ret_inicio(No* l){
    No* p = l->prox;
    free(l);

    return p;
}

void push(Torre* p, char v){
    if(full(p)){
        printf("\n Torre cheia !! \n");
        return;
    }

    p->topo = ins_inicio(p->topo, v);
    p->tam_atual = p->tam_atual + 1;
}

char pop(Torre* p){
    if(empty(p)){
        printf("\n Torre vazia !! \n");
        return ((int)NULL);
    }

    int v = p->topo->valor;
    p->topo = ret_inicio(p->topo);
    p->tam_atual = p->tam_atual - 1;
    return v;
}

int empty(Torre* p){
    return p->tam_atual == 0;
}

int full(Torre* p){
    return p->tam_atual == p->tam_max;
}

void print(Torre* p){
    printf("\n Pilha : ");

    if(empty(p)){
        printf("\n Pilha vazia !! \n");
        return;
    }

    No* q = p->topo;
    while(q != NULL){
        printf("%c |", q->valor);
        q = q->prox;
    }
}

void print_Torres(Torre* R, Torre* G, Torre* B){

    No* q = R->topo;
    No* s = G->topo;
    No* p = B->topo;

    int i;
    for(i = 0; i < R->tam_max; i = i + 1){
        if(i < (R->tam_max - R->tam_atual)) printf("\n                    | | ");
        else printf("\n                     |%c| ", q->valor), q = q->prox;;

        if(i < (G->tam_max - G->tam_atual)) printf(" | | ");
        else printf(" |%c| ", s->valor), s = s->prox;;

        if(i < (B->tam_max - B->tam_atual)) printf(" | |");
        else printf(" |%c| ", p->valor), p = p->prox;;

    }
        printf("\n                     _____________");
        printf("\n                     (R)  (G)  (B)");
}

void libera(Torre* p){
    No* q = p->topo;

    while(q != NULL){
        No* t = q->prox;
        free(q);
        q = t;
    }

    free(p);
}

int lenght(Torre *p){
  return p->tam_atual;
}

void prencher_aleatorio(Torre* p, int qtd){
        int v_rand;

        srand(time(NULL));

    for(int i = 0; i < qtd; i++){
        v_rand = rand() % 3;


        if(v_rand == 0){
            push(p, 'R');
        }
        else if(v_rand == 1){
            push(p, 'G');
        }
        else{
            push(p, 'B');
        }
    }
}

void prencher_aleatorio_torres(Torre* R, Torre* G, Torre* B, int max){
    srand(time(NULL));

    int qtd_R = rand() % 7 + 3; // gera um valor entre 3 e a 9
    prencher_aleatorio(R, qtd_R); 

    int qtd_G = rand() % 5;
    prencher_aleatorio(G, qtd_G);

    int qtd_B = rand() % 4;
    prencher_aleatorio(B, qtd_B);
}

void mover(Torre*  origem, Torre* destino){
    char valor = pop(origem);

    if(valor != 0){
        push(destino, valor);
    }
}

Torre* maior_torre(Torre* R, Torre* G, Torre* B){

    Torre* maior = R;
    
    if(G->tam_atual > maior->tam_atual){
        maior = G;
    }
    if(B->tam_atual > maior->tam_atual){
        maior = B;
    }

    return maior;
}

int ganhou(Torre* R, Torre* G, Torre* B){
    No* q = R->topo;
    No* s = G->topo;
    No* p = B->topo;
    int i;

    for(i = 0; i < R->tam_max; i = i + 1){
        if(i < (R->tam_max - R->tam_atual));
        else{
            if(q->valor != 'R') return 0;
            q = q->prox;
        }
        if(i < (G->tam_max - G->tam_atual));
        else{
            if(s->valor != 'G') return 0;
            s = s->prox;
        }
        if(i < (B->tam_max - B->tam_atual));
        else{
            if(p->valor != 'B') return 0;
            p = p->prox;
        }
    }

    return 1;
}