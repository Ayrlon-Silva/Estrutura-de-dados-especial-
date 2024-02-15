#include <stdio.h>

int main(){
    float temp_fahrenheit;

    //entrada
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &temp_fahrenheit);

    //processamento
    float temp_celcius = (5 * temp_fahrenheit - 160) / 9;

    //saida
    printf("%.1f °F equivalem a %.1f °C.\n", temp_fahrenheit, temp_celcius);

    return 0;
}