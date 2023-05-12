// Desenvolva um código que receba uma variável do tipo inteiro e imprima na tela como um 
// float. Qual a saída mostrada na tela se o número de entrada for 5?
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
    int numero; // Declaramos a variável `numero` como um inteiro para armazenar o valor fornecido pelo usuário.
    
    printf("Digite um número inteiro: "); 
    scanf("%d", &numero);

    float numeroFloat = (float)numero; // Em seguida, usamos `(float)` para realizar um cast e converter explicitamente o valor de `numero` 
                                        // para float. Armazenamos o resultado na variável `numeroFloat`.

    printf("O número como float: %.2f\n", numeroFloat); // Finalmente imprimimos o valor de `numeroFloat` na tela usando o formato "%.2f" para exebir
                                                        // O número com duas casas decimais.

    return 0;
}