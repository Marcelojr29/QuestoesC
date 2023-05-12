// Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar 
// no ano 2024 (não é necessário considerar o mês em que ela nasceu).
 #include <stdio.h>
 #include <locale.h>

 int main(void)
 {
    setlocale(LC_ALL, "Portuguese");
    int anoNascimento;
    int idade;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &anoNascimento);

    idade = 2024 - anoNascimento;

    if(idade >= 16)
    {
        printf("Você poderá votar em 2024\n");
    }else {
        printf("Você não poderá votar em 2024");
    }

    return 0;
 }