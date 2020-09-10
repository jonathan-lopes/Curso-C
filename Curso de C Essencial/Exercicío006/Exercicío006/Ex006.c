#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus celsius e aprasente-a convertida em fahrenheit 
A formula de convensão é: F = C * (9.0 / 5.0) + 32.0, sendo F a temperatura em fahrenheit 
e C a temperatura em celsius*/

int main() 
{
	int cel, fah;

	printf("Digite uma temperatura em graus celsius para ser convertida em fahrenheit: ");
	scanf_s("%d", &cel);

	fah = cel * (9.0 / 5.0) + 32.0;

	system("cls");
	printf("RESULATADO\n\n");

	printf("Celsius.......: %d Graus \n", cel);
	printf("Fahrenheit....: %d Graus \n", fah);

	system("pause");
	return 0;
}