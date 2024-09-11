#include <stdio.h>
#include "rgb.h"
#include <stdlib.h>
#include <time.h>

int main(){
    int max = 9;
    Torre* R = new_Torre(max);
    Torre* G = new_Torre(max);
    Torre* B = new_Torre(max);

    int nivel;
    system("cls");
    printf("\n\n -> Selecione o nivel de dificuldade : \n  (1) facil. \n  (2) intermediário. \n  (3) Dificil. \n\n  0 - Sair. \n\n >> ");
    scanf("%d", &nivel);

    while (nivel != 0){
    
    if(nivel == 1){
        prencher_aleatorio(R, max);
    }
    else if(nivel == 2){
        prencher_aleatorio_torres(R, G, B, 15);
    }
    else if(nivel == 3){
        prencher_aleatorio(R, 7);
        prencher_aleatorio(G, 6);
        prencher_aleatorio(B, 5);
    }

    char menu_inicio[] = "\n\n [================== Torre de Hanoi ==================]\n\n 1 - Mover topo (R) para (G) \n 2 - Mover topo (R) para (B) \n 3 - Mover topo (G) para (R) \n 4 - Mover topo (G) para (B) \n 5 - Mover topo (B) para (R) \n 6 - Mover topo (B) para (G) \n\n 0 - Sair. \n\n >> ";

    int opcao;
    system("cls");
    print_Torres(R, G, B);
    printf("%s", menu_inicio);
    scanf("%d", &opcao);
    int qtd_jogadas = 0;


    while (opcao != 0){
        if(opcao == 1){
            mover(R, G);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (R) movido para (G) < \n");
        }
        else if(opcao == 2){
            mover(R, B);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (R) movido para (B) < \n");
        }
        else if(opcao == 3){
            mover(G, R);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (G) movido para (R) < \n");
        }
        else if(opcao == 4){
            mover(G, B);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (G) movido para (B) < \n");
        }
        else if(opcao == 5){
            mover(B, R);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (B) movido para (R) < \n");
        }
        else if(opcao == 6){
            mover(B, G);
            qtd_jogadas = qtd_jogadas + 1;
            printf("\n > Valor de (B) movido para (G) < \n");
        }
        
        print_Torres(R, G, B);
        if(ganhou(R, G, B)){
            printf("\n\n -- [ Parabéns, Voce ganhou !! jogadas realizadas: %d ] -- \n", qtd_jogadas);
            opcao = 0;
            break;
        }

        printf("%s", menu_inicio);
        scanf("%d", &opcao);
    }

    system("cls");
    printf("\n\n -> Selecione o nivel de dificuldade : \n  (1) facil. \n  (2) intermediário. \n  (3) Dificil. \n\n  0 - Sair. \n\n >> ");
    scanf("%d", &nivel);
    }

    return 0;
}