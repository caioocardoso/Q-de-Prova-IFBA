/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#define MAX_STR 256
int main()
{
    char romanos[MAX_STR];
    int dec[MAX_STR];
    int total=0;
    int iCont;
    
    fgets(romanos, MAX_STR, stdin);
    
    for(iCont=0; romanos[iCont]!='\0' && romanos[iCont]!='\n'; iCont++){
        if(romanos[iCont]=='I')
            dec[iCont]=1;
        if(romanos[iCont]=='V')
            dec[iCont]=5;
        if(romanos[iCont]=='X')
            dec[iCont]=10;
        if(romanos[iCont]=='L')
            dec[iCont]=50;
        if(romanos[iCont]=='C')
            dec[iCont]=100;
        if(romanos[iCont]=='D')
            dec[iCont]=500;
        if(romanos[iCont]=='M')
            dec[iCont]=1000;
        printf("%d ", dec[iCont]);
    }
    
    for(iCont=0; dec[iCont]!='\0' && dec[iCont]!='\n'; iCont++){
        if(dec[iCont]>=dec[iCont+1]){
            total+=dec[iCont]+dec[iCont+1];}
        else if(dec[iCont]<dec[iCont+1]){
            total-=dec[iCont]+dec[iCont+1];
        }
    }
    printf("\n%d", total);
    
}
