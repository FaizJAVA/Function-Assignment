#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            printf("%d",j);
        }
        printf("\n");

    }
}
int main()
{
    p();
    return 0;
}
