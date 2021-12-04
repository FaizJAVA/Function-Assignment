#include<stdio.h>
void p();
void p(){
    int i,j,k;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if (j%2==0)
            {
                printf("0 ");
                break;
            }
            
            else{
                printf("1");
            }
        }
        for(k=0; k<=4; k++){
            if (j%2==0)
            {
                printf("0 ");
                break;
            }
            
            else{
                printf("1");
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
