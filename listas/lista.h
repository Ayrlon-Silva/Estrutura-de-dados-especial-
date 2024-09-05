typedef struct Lista{
    int valor;
    struct Lista* prox;
}Lista;

Lista * nova_Lista();
Lista * inserir_no_inicio(Lista * Lista, int valor);
Lista * inserir_no_final(Lista * lista, int valor);
int esta_vazia(Lista * lista);

void listar(Lista * lista);