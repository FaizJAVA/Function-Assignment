#include<stdio.h>
void p();
void p(){
    int i,j,k,m,value=3;
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d",i+2);

        }
        printf("\n");
    }
    for(m=8; m>=5; m--){
    for(k=5; k<=m-1; k++){
            printf("%d",m-3);
        }
        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
