// Qual o resultado das variáveis de z depois da seguinte seqüência de operações, sendo as variáveis x, y, z do tipo int.
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	int y = 10;
	int z;
	
	z = x + y;
	z = x + 2 - 3 * y;
	z = x + z;
	
	printf("O resultado de z é: %d", z);
	
	return 0;
}