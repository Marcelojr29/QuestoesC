// Ache e identifique qual o erro do programa abaixo.
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", num); // Variável `num` está sendo passada diretamente em vez do enderço de memória dela, para corrigir o erro, é necessário passar
                      // O endereço de memória da variável `num` usando o operador `&` na chamada da função `scanf`.
    printf("%d", num);
    return 0;
}