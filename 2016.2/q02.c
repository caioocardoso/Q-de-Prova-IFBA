/******************************************************************************
Um número primo é um número que possui somente dois divisores: ele mesmo e o  número 1.
Um número primo p é um número primo de Chen se o próximo número ímpar (p + 2) é primo ou o produto de dois primos (subprimo).
Escreva um programa em C, que leia um número e verifique se ele é um número primo de Chen. Por exemplo,
2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2). 3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int primo01, primo02, divisor01, divisor02;
    int aux01, aux02;
    int iCont, jCont, kCont;
    int produto, multiplicador;
    divisor01=divisor02=0;
    scanf("%d", &primo01);
    
    
    for(iCont=1; iCont<=primo01; iCont++){
        if(primo01%iCont==0){
            divisor01++;
        }
    }
    if(divisor01==2){
        primo02=primo01+2;
        for(iCont=1; iCont<=primo02; iCont++){
            if(primo02%iCont==0){
                divisor02++;
            }
        }
        if(divisor02==2){
            printf("%d é um numero da shein", primo01);
        }
        else{
            primo02=primo01+2;
            divisor01=divisor02=0;
            for(iCont=2; iCont<=primo02/2; iCont++){
                for(jCont=1; jCont<=iCont; jCont++){
                    if(iCont%jCont==0){
                    divisor01++;
                    }
                }
                if(divisor01==2){
                    for(jCont=primo02/2; jCont>=iCont; jCont--){
                        for(kCont=1; kCont<=jCont; kCont++){
                            if(jCont%kCont==0){
                            divisor02++;
                            }
                        }
                        if(divisor02==2){
                            produto=jCont*iCont;
                            printf("%d", produto);
                            if(produto==primo02){
                                printf("é primo shein por produto de %d e %d", jCont, iCont);
                            }else{
                                printf("ta bugado");
                            }
                        }
                    }
                }
            }
        }
    }else{
        printf("Esse numero nem primo é burrao!");
    }
}
