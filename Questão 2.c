// Declare 3 variáveis, uma de cada tipo primitivo de dados da linguagem C.
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
    int idade;
    char nome[100];
    float altura;

    printf("Qual seu nome?: \n");
    scanf("%s", nome);

    printf("Qual a sua idade?: \n");
    scanf("%d", &idade);

    printf("Qual a sua altura?: \n");
    scanf("%f", &altura);

    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é %.2f\n", altura);

    return 0;
}