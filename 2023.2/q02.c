/******************************************************************************
Um Expoente de Mersenne é um número natural n, tal que o número de
Mersenne (número da forma Mn = 2^n - 1) por ele gerado também é primo. Escreva um
programa em C, que gere a lista dos primeiros 20 Expoentes de Mersenne, com seus
respectivos números de Mersenne.
******************************************************************************/
#include <stdio.h>

void main()
{
    int n, pot, soma=0;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    pot=1;
    
    for (int iCont=0; iCont<=n; iCont++){
        soma+=pot;
        printf("2^%d = %d\n", iCont, pot);
        pot*=2;
    }
    printf("o valor de M é: %d", soma-1);
}
