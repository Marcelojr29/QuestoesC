// Desenvolva um código que receba três números inteiros e mostre na tela o maior deles
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    int maior = num1;

    if(num2 > num1)
    {
        maior = num2;
    }

    if(num3 > num2)
    {
        maior = num3;
    }

    printf("O maior número é %d\n", maior);

    return 0;
}
