/******************************************************************************
Seu chefe está ao telefone, nervoso. Ele quer que você compute a soma
de uma sequência de números que ele vai falar para você ao telefone, para saber o total
das vendas em sua mais recente viagem de negócios. Infelizmente, de vez em quando seu
chefe fala números errados para você ao telefone. Felizmente, seu chefe rapidamente
percebe que falou um número errado e diz "zero", que como combinado previamente quer
dizer ignore o último número corrente.
*******************************************************************************/
#include <stdio.h>

void main()
{
    int num=0, vet[10], soma=0, jCont;
    
    for (int iCont=0; iCont<10; iCont++){
        vet[iCont]=0;
    }
    
    for (jCont=0; jCont<10 && num!=-1; ){
        printf("Digite um numero para a posicao: %d\n", vet[jCont+1]);
        scanf("%d", &num);
        
        if (num==0){
            jCont--;
        }else if(num!=0 && num!=-1){
            vet[jCont]=num;
            jCont++;
        }
    }
    for (int iCont=0; iCont<10; iCont++){
        soma+=vet[iCont];
    }
    printf ("%d", soma);
}
  
