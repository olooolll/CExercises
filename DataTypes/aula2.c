/******************************************************************************

2. Faça um programa que leia 3 valores inteiros e calcule a soma e o
produto.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n1, n2, n3;
    
    printf("Informe o 1° número: "); scanf("%d", &n1);
    printf("Informe o 2° número: "); scanf("%d", &n2);
    printf("Informe o 3° número: "); scanf("%d", &n3);
    
    printf("Total da soma: %d", n1 + n2 + n3);
    printf("\n");
    printf("Total do produto: %d", n1 * n2 * n3);
    
    return 0;
}