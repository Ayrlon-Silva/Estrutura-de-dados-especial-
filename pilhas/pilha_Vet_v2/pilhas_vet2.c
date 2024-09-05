#include <stdio.h>
#include "pilhas_vet2.h"
#include <stdlib.h>

Pilha* cria (void){
  Pilha * p = (Pilha*) malloc(sizeof(Pilha));
  p->qtd = 0;

  return p;
}

int full (Pilha * p){
  return (p->qtd == MAX);
}

int vazia (Pilha* p){
  return (p->qtd == 0);
}

void push (Pilha* p, int v){
  if(full(p)){
    printf("\nCapacidade da pilha estourou.\n");
    return;
  }

  p->vet[p->qtd] = v;
  p->qtd++;
}

int pop (Pilha* p){
  if(vazia(p)){
      return ((int)NULL);
  }

  int v;

  v = p->vet[p->qtd-1];
  p->qtd--;


  return v;
}

void libera (Pilha* p){
  free(p);
}

void show(Pilha* p){
  printf("\n Pilha : ");
  if(vazia(p)){
    printf("\n Pilha vazia.\n");
    return;
  }


  for(int i = p->qtd-1; i >= 0; i--){
    printf("\n|%d| ", p->vet[i]);
  }
}

int lenght(Pilha *p){
  return p->qtd;
}