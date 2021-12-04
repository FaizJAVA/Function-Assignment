#include<stdio.h>
void p();
void p(){
    int i,j,a=1;
    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){
            printf("%d",a);
            
        }
        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
