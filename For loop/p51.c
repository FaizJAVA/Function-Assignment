#include<stdio.h>
void p();
void p(){
     int i,j;
    for(i=4; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d",i+2);
            
            }
        
        printf("\n");     
            

    }
}
int main()
{
   p();
    return 0;
}
