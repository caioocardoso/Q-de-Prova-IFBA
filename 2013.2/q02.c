/******************************************************************************
Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros
pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43).
Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o
programa em questão.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, aux, temp;
    int jCont=3;
    scanf("Numero de pares primos gemeos %d", &n);
    
    for(int iCont=0; iCont<n;){
        for(; aux==0;){
            temp=jCont;
            for(int kCont=2; kCont<jCont && aux==0; kCont++){
                if(jCont%kCont==0){
                    aux++;
                    jCont+=2;
                    temp=0;
                }
            }if(temp!=0){
                aux=0;
                jCont+=2;
                for(; aux==0;){
                    temp=jCont;
                    for(int kCont=2; kCont<jCont && aux==0; kCont++){
                        if(jCont%kCont==0){
                            aux++;
                            jCont+=2;
                            temp=0;
                        }
                    }if(temp!=0){
                        printf("[%d, %d] ", temp-2, temp);
                        iCont++;
                    }
                }
            }
        }
    }
}