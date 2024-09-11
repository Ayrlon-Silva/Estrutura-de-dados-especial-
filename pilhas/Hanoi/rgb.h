typedef struct no{
    char valor;
    struct no* prox;
}No;

typedef struct{
    No* topo;
    int tam_max;
    int tam_atual;
}Torre;

Torre* new_Torre(int max);

No* ins_inicio(No* l, char v);

No* ret_inicio(No* l);

void push(Torre* p, char v);

char pop(Torre* p);

int empty(Torre* p);

int full(Torre* p);

void print(Torre* p);

void print_Torres(Torre* R, Torre* G, Torre* B);

void libera(Torre* p);

int lenght(Torre *p);

void prencher_aleatorio(Torre* p, int qtd);

void prencher_aleatorio_torres(Torre* R, Torre* G, Torre* B, int max);

void mover(Torre*  origem, Torre* Destino);

Torre* maior_torre(Torre* R, Torre* G, Torre* B);

int ganhou(Torre* R, Torre* G, Torre* B);