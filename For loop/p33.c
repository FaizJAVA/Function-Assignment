#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if (i==j||i==6-j)
            {
                printf("1 ");
            }
            else{
                printf("0 ");
            }
            
            
        }
        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
