#include <stdio.h>
#include <stdlib.h>

//Leia um numero real e imprima a quinta parte dele

int main()
{
	float num;

	printf("Digite um numero real: ");
	scanf_s("%f", &num);

	num = num / 5;

	printf("A quinta parte desse numero eh: %.2f \n", num);


	system("pause");
	return 0;
}