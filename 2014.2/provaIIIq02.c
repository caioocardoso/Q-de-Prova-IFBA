/******************************************************************************
O agrupamento de duas ou mais consoantes, sem vogal intermediária, recebe o nome
de encontro consonantal.
Escreva um programa em C, que leia uma string de até 256 caracteres, conte e imprima o
número de encontros consonantais identificados na string.
Por exemplo, na string “O istmo de Stradun não fica no Brasil”. O programa deverá imprimir o
valor 3.
*******************************************************************************/
#include <stdio.h>
#define MAX_STR 256
int main()
{
    char str[MAX_STR];
    char vogais[10]={'A', 'a', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int iCont, jCont;
    int encontroconsonantal;
    int qntencontroconsonantal=0;
    int aux=0;
    
    fgets(str, MAX_STR, stdin);
    
    for(iCont=0; str[iCont+1]!='\n'; iCont++){
        encontroconsonantal=1;
        for(jCont=0; jCont<11; jCont++)
            if((str[iCont]==vogais[jCont] || str[iCont+1]==vogais[jCont]))
                encontroconsonantal=0;
        if(encontroconsonantal && !aux)
            qntencontroconsonantal++;
        aux=encontroconsonantal;
    }
    printf("%d", qntencontroconsonantal);
}
