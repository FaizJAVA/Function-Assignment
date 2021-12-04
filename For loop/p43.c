#include<stdio.h>
void p();
void p(){
    int i,j,k=0;
    for(i=1; i<=5; i++){

        for (j=1; j<=i; j++){
        k++;
        printf("%d",k);
        }
        printf("\n");
        
    }
}
int main()
{
    p();
    return 0;
}
