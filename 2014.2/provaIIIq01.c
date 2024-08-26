/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#define TAM 4
int main()
{
    int matriz[TAM][TAM];
    int permutacao=1;
    int contadorLinha, contadorColuna;
    int iCont, jCont;
    
    
    
    
    for(iCont=0;iCont<TAM; iCont++){
        for(jCont=0; jCont<TAM; jCont++){
            scanf("%d", &matriz[iCont][jCont]);
        }
    }
    
    for(iCont=0;iCont<TAM; iCont++){
        contadorColuna=0;
        for(jCont=0; jCont<TAM; jCont++){
            contadorColuna+=matriz[iCont][jCont];
        }
        if(contadorColuna!=1)
            permutacao=0;
    }
    
    for(iCont=0;iCont<TAM; iCont++){
        contadorLinha=0;
        for(jCont=0; jCont<TAM; jCont++){
            contadorLinha+=matriz[jCont][iCont];
        }
        if(contadorLinha!=1)
            permutacao=0;
    }
    
    if(permutacao==1)
        printf("é");
    else
        printf("nao é");
}
