#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=i; j<=(i*2)-1; j++){
            if (j%2==0)
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