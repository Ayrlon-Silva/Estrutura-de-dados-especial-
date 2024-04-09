#include <stdio.h>

int comparar_strings(char* str1, char* str2, int tam){
    int diferentes = 0;
    for(int i = 0; i < tam; i++){
        if(str1[i] != str2[i]){
            diferentes++;
        }
    }
    if(diferentes > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int length(char* string){
    int tam = 0;
    while (string[tam] != '\0'){
        tam++;
    }
    return tam + 1;
}

float get_positive_float(char* label){
    float num;
    printf("%s", label);
    scanf("%f", &num);
    while(num <= 0){
        printf("\nErro! Por favor digite um valor positivo.\n");
        printf("%s", label);
        scanf("%f", &num);
    }
    return num;
}

int main(){
    //char cpf1[13];
    //printf("\n> CPF (xxxxxxxxx-xx): ");
    //scanf(" %120[^\n]", &cpf1);
    //char cpf2[] = "070896963-17";
    //char numero[] = "111-1";
    //float num = get_positive_float("num: ");

    /*if(comparar_strings(cpf1, cpf2, 14) == 1){
        printf("São diferentes");
    }
    else{
        printf("São iguais");
    }*/

    //printf("Tam : %f\n", num);
    //printf("Tam : %d\n", length(cpf2));
    //printf("Tam : %d\n", length(numero));

    return 0;
}