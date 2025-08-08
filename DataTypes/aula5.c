/******************************************************************************

5. Faça um programa que leia o código (inteiro) e salário de 5 funcionários e imprima
o relatório com valores justificados à direita

*******************************************************************************/
#include <stdio.h>

int main(){
    int cd1, cd2, cd3, cd4, cd5;
    float fn1, fn2, fn3, fn4, fn5;
    
    printf("Informe o código e depois o salario do 1° funcionário: "); scanf("%d %f", &cd1, &fn1);
    printf("Informe o código e depois o salario do 2° funcionário: "); scanf("%d %f", &cd2, &fn2);
    printf("Informe o código e depois o salario do 3° funcionário: "); scanf("%d %f", &cd3, &fn3);
    printf("Informe o código e depois o salario do 4° funcionário: "); scanf("%d %f", &cd4, &fn4);
    printf("Informe o código e depois o salario do 5° funcionário: "); scanf("%d %f", &cd5, &fn5);
    
    printf("Código | Salario\n");
    printf("%6d | %7.2f\n", cd1, fn1);
    printf("%6d | %7.2f\n", cd2, fn2);
    printf("%6d | %7.2f\n", cd3, fn3);
    printf("%6d | %7.2f\n", cd4, fn4);
    printf("%6d | %7.2f\n", cd5, fn5);
    
    return 0;
}