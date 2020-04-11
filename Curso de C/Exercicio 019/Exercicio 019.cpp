// Exercicio 019.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salarioBruto, taxaINSS, salarioLiquido, desconto;

    printf("Digite o salario bruto do funcionario: ");
    scanf_s("%f", &salarioBruto);

    if (salarioBruto <= 1317.07)
        taxaINSS = 8;

    else if (salarioBruto <= 2195.12)
        taxaINSS = 9;

    else
        taxaINSS = 11;

    desconto = (salarioBruto * (taxaINSS / 100));
   
    salarioLiquido = (salarioBruto - desconto);
    
    printf("Salario Bruto.......: R$ %.2f  \n", salarioBruto);
    printf("Taxa INSS...........: %.0f%%   \n", taxaINSS);
    printf("Desconto do INSS....: R$ %.2f  \n", desconto);
    printf("Salario liquido.....: R$ %.2f  \n", salarioLiquido);
    
    system("PAUSE");
    return 0;
}