#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus fahrenheit e aprasente-a convertida em celsius
A formula de convensão é: C = 5.0 * (F - 32.0) / 9.0, sendo C a temperatura em celsius
e F a temperatura em fahrenheit*/

int main()
{
	int cel, fah;

	printf("Digite uma temperatura em fahrenheit: ");
	scanf_s("%d", &fah);

	cel = 5.0 * (fah - 32.0) / 9.0;

	system("cls");
	printf("RESULATADO\n\n");

	printf("Celsius.......: %d Graus \n", cel);
	printf("Fahrenheit....: %d Graus \n", fah);

	system("pause");
	return 0;
}