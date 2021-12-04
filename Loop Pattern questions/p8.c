#include<stdio.h>
void pattern1();
void pattern1(){
    int i,j,k,l;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=5; k>=i; k--){
            printf("*");
        }
        for(l=4; l>=i; l--){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
    
    return 0;
}
