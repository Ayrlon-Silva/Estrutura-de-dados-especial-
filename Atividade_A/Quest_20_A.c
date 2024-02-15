#include <stdio.h>

int main(){
    float temp_celcius;

    //entrada
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &temp_celcius);

    //processamento
    float temp_fahrenheit = (9 * temp_celcius + 160) / 5;

    //saida
    printf("%.1f °C equivalem a %.1f °F.\n", temp_celcius, temp_fahrenheit);

    return 0;
}