/******************************************************************************

6. Faça um programa para converter números de formato decimal para hexadecimal

*******************************************************************************/
#include <stdio.h>

int main(){
    int n;

    printf("Informe um número intenro: "); scanf("%d", &n);
    printf("Intero %d | Hexadecimal %x", n, n);

    return 0;
}