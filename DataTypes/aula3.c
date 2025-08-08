/******************************************************************************

3. Faça um programa para calcular a área do círculo.


*******************************************************************************/
#include <stdio.h>

int main(){
    float r;
    const float PI = 3.141592;
    
    printf("Informe o varloe do raio: "); scanf("%f", &r);
    
    printf("π (%f) x %.2f² = %.2f", PI, r, PI*(r * r));
    
    return 0;
}