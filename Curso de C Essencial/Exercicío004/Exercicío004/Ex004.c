#include <stdio.h>	
#include <stdlib.h>

//Leia um numero real e imprima o quadrado desse numero

int main()
{
	float num;

	printf("Digite um numero real: ");
	scanf_s("%f", &num);

	num *= num;

	printf("O quadrado desse numero numero eh: %.2f \n", num);


	system("pause");
	return 0;
}