#include <stdio.h>
#include <stdlib.h>

int * premiados(int n, int * inscr, float * t1, int p1,float * t2, int p2, int * tam);

void prencher_vetor_int(int tamanho, int *vetor);

void prencher_vetor_float(int tamanho, float *vetor);

void mostrar_vetor(int n, int * vetor);

void bubble_sort(float * vetor, int n);

int main(){
    int n;

    printf("Quantidade de participantes: ");
    scanf("%d", &n);

    int inscr[n];
    float t1[n], t2[n];
    int p1,p2;
    int tam = 0;

    prencher_vetor_int(n, inscr);

    printf("> Prencha as notas da prova 1 <\n");
    prencher_vetor_float(n, t1);
    printf("Peso da nota 1: ");
    scanf("%d", &p1);

    printf("> Prencha as notas da prova 2 <\n");
    prencher_vetor_float(n, t2);
    printf("Peso da nota 2: ");
    scanf("%d", &p2);


    int * vencedores = premiados(n, inscr, t1, p1, t2, p2, &tam);

    printf("qtd : %d\n", tam);

    mostrar_vetor(tam, vencedores);

    return 0;
}



void prencher_vetor_int(int tamanho, int * vetor){
    for(int i=0; i < tamanho; i++){
        printf("Valor %d : ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void prencher_vetor_float(int tamanho, float *vetor){
    for(int i=0; i < tamanho; i++){
        printf("Valor %d : ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void mostrar_vetor(int n, int * vetor){
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("\b\b]\n");
}

void mostrar_vetor_float(int n, float * vetor){
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%.2f, ", vetor[i]);
    }
    printf("\b\b]\n");
}

int * premiados(int n, int * inscr, float * t1, int p1,float * t2, int p2, int * tam){
    float medias[n];

    for(int i = 0; i < n; i++){
        medias[i] =  (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
    }

    float maior_media = -1.0;

    //encontrar maior media
    for(int i = 0; i < n; i++){
        if(medias[i] > maior_media){
            maior_media = medias[i];
        }
    }
    //encontrar qtd de vencedores
    int count = 0;
    for(int i = 0; i < n; i++){
        if(medias[i] == maior_media){
            count += 1;
        }
    }
    *tam = count;

    int * vencedores = (int *) malloc(count * sizeof(int));

    for(int i = 0; i < n; i++){
        if(medias[i] == maior_media){
            vencedores[i] = inscr[i];
        }
    }

    return vencedores;

}