#define MAX 6

struct node {
    int value;
    struct node* next;
};

typedef struct node Node;

typedef struct {
    Node* topo; //Ponteiro para o primeiro Nó da pilha
    int tam_atual;
    int tam_max;
} Pilha;


Pilha* new_Pilha();

Node* ins_inicio(Node* l, int v);

Node* ret_inicio(Node* l);

void push(Pilha* p, int v);

int pop(Pilha* p);

int empty(Pilha* p);

int full(Pilha* p);

void print(Pilha* p);

void libera(Pilha* p);

int lenght(Pilha *p);




