/******************************************************************************
Um grupo de estudantes de ADS, está desenvolvendo uma nova notação posicional para representar
 números inteiros. Este grupo chamou esta representação de "A Curious Method" ("Um Método
 Curioso"), representado pela sigla ACM. A notação ACM usa os mesmos dígitos que a notação
 decimal, isto é, de 0 a 9.
Para converter um número A da notação ACM para a notação decimal, você deve adicionar k termos, onde k é o número de dígitos de A (na notação ACM), O valor do i-ésimo termo, correspondente ao i-ésimo dígito ai, contando da direita para a esquerda, é ai × i!. Por exemplo, 719(ACM) é equivalente a 53(10), já que 7 × 3! + 1 × 2! + 9 × 1! = 53.
Escreva um programa em C, que leia um número na notação ACM e imprima o equivalente na notação decimal.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int acm;
    int dig, aux, divisor, result=0, fat=0;
    
    scanf("%d", &acm);
    
    for (dig=0, aux=acm, divisor=1; aux!=0; dig++){
        aux=aux/10;
        divisor=divisor*10;
    }
    
    divisor=divisor/10;
    
    for(aux=acm; dig>0; ){
        fat=dig;
        for(int iCont=dig-1; iCont>0; iCont--){
            fat=fat*iCont;
        }
        result+=((aux/divisor)*fat);
        
        aux=aux%divisor;
        divisor=divisor/10;
        dig--;
    }
    
    
    printf("%d", result);
}