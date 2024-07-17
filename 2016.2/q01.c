 #include <stdio.h>

int main(){
    int i, j, m;
    scanf("%d %d %d", &i,&j,&m);
    
    if(i%m==j%m){
        for(int iCont=1; iCont<=i; iCont++){
            for(int kCont=1; kCont<=j; kCont++){
                if(iCont%m==kCont%m){
                    printf("%d e %d\n", iCont, kCont);
                }
            }
        }
    }
}