#include "lista.h"

int main(){

    Lista * my_list = nova_Lista();

    my_list = inserir_no_inicio(my_list, 22);
    my_list = inserir_no_inicio(my_list, 11);
    my_list = inserir_no_inicio(my_list, 10);
    my_list = inserir_no_final(my_list, 33);

    listar(my_list);
    inserir_no_final(my_list, 44);
    listar(my_list);


    return 0;
}