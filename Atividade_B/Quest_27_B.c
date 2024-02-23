#include <stdio.h>

int main(){
    int segundos;

    //entrada
    printf("Digite um numero inteiro de segundos : ");
    scanf("%d", &segundos);

    //processamento
    int horas = segundos / 3600;
    int minutos = ((segundos % 3600)  / 60);
    int segundos_rest = ((segundos % 3600)  % 60);

    //saida
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_rest);

    return 0;
}