#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main()
{
    return 0;
}
