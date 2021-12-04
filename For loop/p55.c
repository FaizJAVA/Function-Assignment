#include<stdio.h>
void p();
void p(){
    int i,j;
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            if(i+j==6||j-i==4||i-j==4||i+j==14)
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }
}
int main()
{
    p();
    return 0;
}
