/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#define MAX_STR 256
int main()
{
    char str[MAX_STR];
    int troca;
    int iCont;
    int tam;
    
    fgets(str, MAX_STR, stdin);
    
    for(iCont=0; str[iCont]!='\n'; iCont++);
    tam=iCont-1;
    
    troca=0;
    for(iCont=0; iCont<tam ; iCont++){
        if(str[iCont]>str[iCont+1]){
            troca=1;
        }
    }
    if(troca==1)
        printf("desordenada");
    else if(troca==0)
        printf("ordenada");
}
