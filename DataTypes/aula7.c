/******************************************************************************

7. Faça um programa para calcular as raízes de uma equação do 1º grau (ax + b = 0).

*******************************************************************************/
#include <stdio.h>

int main(){
    float a, b;

    printf("F(x) | Ax + b = 0\n");
    printf("Informe o valor de A: "); scanf("%f", &a);
    printf("Informe o valor de B: "); scanf("%f", &b);
    printf("X = %.2f / %.2f\n", -b, a);
    printf("X = %.2f", -b/a);

    return 0;
}