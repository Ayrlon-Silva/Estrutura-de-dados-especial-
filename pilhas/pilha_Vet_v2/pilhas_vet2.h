#define MAX 6

typedef struct pilha {
  int qtd;
  int vet[MAX];
} Pilha;


Pilha* cria (void);

int full (Pilha * p);

int vazia (Pilha* p);

void push (Pilha* p, int v);

int pop (Pilha* p);

void libera (Pilha* p);

void show(Pilha* p);

int lenght(Pilha* p);
