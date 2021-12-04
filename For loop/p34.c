#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=0; j<=4; j++){
            if (j%2==0)
            {
                printf("0 ");
            }
            else{
                printf("1 ");
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
