// exercicio 020.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valorFilho, salarioHora, salarioBruto, salarioFamilia, salarioLiquido;
    int qtdFilhos, qtdHorasTrabalhadas;

    printf("Qual seu salario hora: ");
    scanf_s("%f", &salarioHora);
    printf("Quantidade de horas trabalhadas: ");
    scanf_s("%d", &qtdHorasTrabalhadas);
    printf("Quantidade de filhos menores de 14 anos: ");
    scanf_s("%d", &qtdFilhos);

    salarioBruto = (salarioHora * qtdHorasTrabalhadas);

    if (salarioBruto <= 700)
        valorFilho = 8.50;

    else if (salarioBruto <= 1000)
        valorFilho = 6.50;
   
    else
        valorFilho = 2.50;

    salarioFamilia = (valorFilho * qtdFilhos);
    salarioLiquido = (salarioBruto + salarioFamilia);

    printf("Valor do salario Bruto.....: R$ %.2f \n", salarioBruto);
    printf("Valor do salario Familia...: R$ %.2f \n", salarioFamilia);
    printf("Valor do salario Liquido...: R$ %.2f \n", salarioLiquido);

    system("pause");
    return 0;
}