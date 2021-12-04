#include<stdio.h>
void p();
void p(){
    int i,j,k,l,m;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(k=4; k>=i; k--){
            printf(" ");
        }
        for(l=4; l>=i; l--){
            printf(" ");
        }
        for(m=1; m<=i; m++){
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    p();    
    return 0;
}
