/******************************************************************************
Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros
pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43).
Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o
programa em questão.
*******************************************************************************/
#include <stdio.h>

int main(){
    int n, primo1, primo2;
    int divisor01, divisor02;
    int iCont, jCont, kCont;
    primo1=3;
    
    scanf("%d", &n);
    
    for(iCont=1; iCont<=n;){
        divisor01=0;
        divisor02=0;
        for(jCont=2; jCont<primo1; jCont++){
            if(primo1%jCont==0)
                divisor01++;
        }if(divisor01==0){
            primo2=primo1+2;
            for(jCont=2; jCont<primo2; jCont++){
                if(primo2%jCont==0)
                    divisor02++;
            }if(divisor02==0){
                printf("[%d, %d] ", primo1, primo2);
                iCont++;
            }
        }else{
            primo1+=2;
        }
    }
}