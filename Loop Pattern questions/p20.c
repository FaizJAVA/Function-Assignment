#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=1; i<=7; i++){
            for(j=1; j<=4; j++){
                if (j==1||i==4&&j>=2&&j<=3||i==7&&j>=2&&j<=3||j==4&&i>=5&&i<=6)
                    printf("*");    
                else
                printf(" ");
                
            }
            printf("\n");
        }    
}
int main()
{
    pattern();
    return 0;
}
