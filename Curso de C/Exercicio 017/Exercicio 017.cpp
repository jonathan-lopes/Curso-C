// Exercicio 017.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesa, calc;

    printf("Digite sua receita: ");
    scanf_s("%f", &receita);
    printf("Digite sua despeza: ");
    scanf_s("%f", &despesa);

    calc = receita - despesa;

    if (receita > despesa)
        printf("Houver lucro.    \nO lucro foi de %.2f R$ \n", calc);
    else
        printf("Houver prejuizo. \nO prejuizo foi de %.2f R$ \n", calc);

    system("pause");

    return 0;     
}
