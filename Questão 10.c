// As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. 
// Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor total da compra.
#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int qtd;
    float valTotal;

    printf("Digite a quantidade de maçãs compradas: \n");
    scanf("%d", &qtd);

    if(qtd < 12)
    {
        valTotal = qtd * 0.30;
    }else{
        valTotal = qtd * 0.25;
    }

    printf("O valor total da compra é: R$ %.2f\n", valTotal);
    
    return 0;
}