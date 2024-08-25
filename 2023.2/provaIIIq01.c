/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#define N 9
#define M 14
int main()
{
    char c[N][M]=  {{'.','.','.','.','.','.','.','o','.','.','.','.','.','.'},
                    {'.','#','#','#','.','.','.','#','#','#','#','.','#','.'},
                    {'.','.','.','.','.','.','.','.','.','.','.','.','.','.'},
                    {'.','.','#','#','#','#','#','#','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.','.','.','.','.','.','.'},
                    {'.','#','.','#','#','#','#','.','.','.','.','#','#','.'},
                    {'.','.','.','.','.','.','.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','#','#','#','#','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.','.','.','.','.','.','.'}};
    int i, j, trocou;
    do{
        trocou=0;
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++){
                if(c[i][j]=='.'){
                    if((c[i-1][j]=='o') ||
                      ((c[i][j-1]=='o') && c[i+1][j-1]=='#') ||
                      ((c[i][j+1]=='o') && c[i+1][j+1]=='#')){
                        c[i][j]='o';
                        trocou=1;
                    }
                }
            }
        }
    }while(trocou);
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++)
            printf("%c", c[i][j]);
        printf("\n");
    }
}
