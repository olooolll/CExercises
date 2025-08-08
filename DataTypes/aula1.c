/******************************************************************************

1. Escreva um programa que leia dia, mês e ano de nascimento uma pessoa. Imprima a frase
“Você nasceu em xx/xx/xxxx.”

*******************************************************************************/
#include <stdio.h>

int main(){
    int day, month, yer;
    
    printf("Informe o dia: "); scanf("%d", &day);
    printf("Informe o mês: "); scanf("%d", &month);
    printf("Informe o ano: "); scanf("%d", &yer);
    
    printf("%02d/%02d/%d", day, month, yer);
    
    return 0;
}