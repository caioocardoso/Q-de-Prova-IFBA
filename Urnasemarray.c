#include <stdio.h>

int main()
{
    int voto0, voto1, voto2;
    int voto;
    voto=5;
    
    for (; voto!=-1; ){
        scanf("%d", &voto);
        
        while (voto>2 || voto<-1){
            printf("Valor inválido, digite o valor que indique o voto de uma proposta (1, 2 ou 3) ou confirme com -1\n");
            scanf("%d", &voto);
        }
        
        if (voto==0){
            voto0+=1;
        }else if(voto==1){
            voto1+=1;
        }else if(voto==2){
            voto2+=1;
        }
    }
    
    printf("%d (Proposta 0), %d (Proposta 1) e %d para a (Proposta 2)", voto0, voto1, voto2);
    
    return 0;
}
