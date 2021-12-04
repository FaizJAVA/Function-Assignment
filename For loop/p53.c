#include<stdio.h>
void p();
void p(){
    int i,j,k,m,value1=3,value2=8;
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d",value1++);

        }
        printf("\n");
    }
    for(m=1; m<=3; m++){
    for(k=3; k>=m; k--){
            printf("%d",value2--);
        }
        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
