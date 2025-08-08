/******************************************************************************

4. Faça um programa que leia a idade de 4 pessoas e calcule a média

*******************************************************************************/
#include <stdio.h>

int main(){
    int p1, p2, p3, p4;
    
    printf("Informe a idade da 1° pessoa: "); scanf("%d", &p1);
    printf("Informe a idade da 2° pessoa: "); scanf("%d", &p2);
    printf("Informe a idade da 3° pessoa: "); scanf("%d", &p3);
    printf("Informe a idade da 4° pessoa: "); scanf("%d", &p4);
    
    printf("A média de idade deles são: %.2f", (p1 + p2 + p3 + p4) / 4.0);
    
    return 0;
}