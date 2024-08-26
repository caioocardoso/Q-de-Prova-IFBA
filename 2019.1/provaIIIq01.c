/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_STR 256
int main()
{
    char string[MAX_STR];
    char caracters[MAX_STR];
    char faixas[MAX_STR];
    char primeiro, ultimo, ndxFaixas;
    int iCont, jCont;
    int tam;
    char aux;
    
    fgets(string, MAX_STR, stdin);
    
    for(iCont = tam = 0; string[iCont] != '\n'; iCont++){
        if(string[iCont] >= 'a' && string[iCont] <= 'z')
            caracters[tam++]=string[iCont];
    }
    
    for(iCont = 0; iCont < tam-1; iCont++)
        for(jCont = iCont + 1; jCont < tam; jCont++)
            if(caracters[iCont] > caracters[jCont]){
                aux = caracters[iCont];
                caracters[iCont] = caracters[jCont];
                caracters[jCont] = aux;
            }
            
    for(iCont = 0, ndxFaixas = 0; iCont < tam; iCont++){
        primeiro = caracters[iCont];
        while(iCont < tam && caracters[iCont+1] <= caracters[iCont] + 1)
            iCont++;
        if(iCont >= tam)
            ultimo = caracters[iCont-1];
        else
            ultimo = caracters[iCont];
        
        faixas[ndxFaixas++] = primeiro;
        faixas[ndxFaixas++] = ':';
        faixas[ndxFaixas++] = ultimo;
        faixas[ndxFaixas++] = ' ';
    }
    
    faixas[ndxFaixas] = '\0';
    puts(faixas);
}
