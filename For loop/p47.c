#include<stdio.h>
void p();
void p(){
     int i,j;
    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
