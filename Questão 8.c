// Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor na tela correspondente em graus Celsius.
#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    float temp_f, temp_c;

    printf("Digite uma temperatura em graus Fahrenheit: \n");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32) / 1.8;

    printf("A temperatura em graus Celsius é: %.2f\n", temp_c);

    return 0;

}