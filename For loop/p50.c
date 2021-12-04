#include<stdio.h>
void p();
void p(){
    int i,j,value=10;
    for(i=1; i<=4; i++){
        for(j=4; j>=i; j--){
            printf("%d",value--);
            }
        
        printf("\n");     
        printf("\n");     

    }
}
int main()
{
    p();
    return 0;
}
