#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
int x;
int y;
} Ponto;

typedef struct {
Ponto p;
int raio;
} Circulo;

void mostraCirculo(Circulo *c);
void atribuiAleatorio(Circulo *c);
void atribuiAleatorioVetor(Circulo *c, int n);
void mostraCirculoVetor(Circulo *c, int n);

int main(){
    Ponto p1;
    p1.x = 0;
    p1.y = 0;

    printf("Ponto x de p1: ");
    scanf("%d", &p1.x);
    printf("Ponto y de p1: ");
    scanf("%d", &p1.y);

    Circulo c1;
    c1.p.x = 0;
    c1.p.y = 0;
    c1.raio = 0;

    printf("Ponto x do Circulo c1: ");
    scanf("%d", &c1.p.x);
    printf("Ponto y do Circulo c1: ");
    scanf("%d", &c1.p.y);
    printf("Digite o valor do raio de c1: ");
    scanf("%d", &c1.raio); 

    Circulo * c2;
    c2 = (Circulo *) malloc(sizeof(Circulo));

    printf("Ponto x do Circulo c2: ");
    scanf("%d", &c2->p.x);
    printf("Ponto y do Circulo c2: ");
    scanf("%d", &c2->p.y);
    printf("Digite o valor do raio de c2: ");
    scanf("%d", &c2->raio);

    atribuiAleatorio(c2);
    mostraCirculo(c2);
    atribuiAleatorio(&c1);
    mostraCirculo(&c1);

    Circulo * c3 = &c1;
    atribuiAleatorio(c3);

    mostraCirculo(&c1);
    mostraCirculo(c3);

    Circulo vet[10];
    atribuiAleatorioVetor(vet, 10);
    mostraCirculoVetor(vet, 10);

    return 0;
}

void mostraCirculo(Circulo *c){
    printf("\n Circulo \n");
    printf("Ponto X: %d \n", c->p.x);
    printf("Ponto Y: %d \n", c->p.y);
    printf("Raio: %d \n", c->raio);
}

void atribuiAleatorio(Circulo *c){
    c->p.x = rand() % 99 + 0;
    c->p.y = rand() % 99 + 0;
    c->raio = rand() % 99 + 0;
}

void atribuiAleatorioVetor(Circulo *c, int n){

    for(int i = 0; i < n; i++){
        c[i].p.x = rand() % 99 + 0;
        c[i].p.y = rand() % 99 + 0;
        c[i].raio = rand() % 99 + 0;
    }
}

void mostraCirculoVetor(Circulo *c, int n){
    for(int i = 0; i < n; i++){
        mostraCirculo(&c[i]);
    }
}