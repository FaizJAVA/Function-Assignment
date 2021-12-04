#include<stdio.h>
void p();
void p(){
    int i,space,j,k;
    for(i=1; i<=5; i++){
        for(space=1; space<=i; space++){
            printf(" ");
        }
        for(j=5; j>=i; j--){
            if (j%2==0)
            {
                printf("0");
            }
            else{
                printf("1");
            }
            }
        for(k=4; k>=i; k--){
            if (k%2==0)
            {
                printf("0");

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
