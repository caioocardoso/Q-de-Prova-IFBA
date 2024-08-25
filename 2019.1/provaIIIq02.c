/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#define MAX_STR 256
int main()
{
    char str[MAX_STR];
    int num[MAX_STR];
    int iCont, jCont;
    
    fgets(str, MAX_STR, stdin);
    
    for(iCont=0, jCont=0; str[iCont]; iCont++){
        if(str[iCont]=='-'){
            num[jCont]=str[iCont];
            jCont++;
        }
        else if(str[iCont]=='1'){
            num[jCont]=1;
            jCont++;
        }
        else if(str[iCont]=='0'){
            num[jCont]=0;
            jCont++;
        }
        else if(str[iCont]>='A' && str[iCont]<='C'){
            num[jCont]=2;
            jCont++;
        }
        else if(str[iCont]>='D' && str[iCont]<='F'){
            num[jCont]=3;
            jCont++;
        }
        else if(str[iCont]>='G' && str[iCont]<='I'){
            num[jCont]=4;
            jCont++;
        }
        else if(str[iCont]>='J' && str[iCont]<='L'){
            num[jCont]=5;
            jCont++;
        }
        else if(str[iCont]>='M' && str[iCont]<='O'){
            num[jCont]=6;
            jCont++;
        }
        else if(str[iCont]>='P' && str[iCont]<='S'){
            num[jCont]=7;
            jCont++;
        }
        else if(str[iCont]>='T' && str[iCont]<='V'){
            num[jCont]=8;
            jCont++;
        }
        else if(str[iCont]>='W' && str[iCont]<='Z'){
            num[jCont]=9;
            jCont++;
        }
    }
    num[jCont]='\0';
    for(iCont=0; num[iCont]!='\0'; iCont++){
        if(num[iCont]=='-')
            printf("%c", num[iCont]);
        else
            printf("%d", num[iCont]);
    }
}
