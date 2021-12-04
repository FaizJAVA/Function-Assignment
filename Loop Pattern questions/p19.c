#include<stdio.h>
void pattern();
void pattern(){
    int i,j;
    for(i=1; i<=6; i++){
            for(j=1; j<=5; j++){
                if (j==1&&i>=3&&i<=4||i==2&&j>=2&&j<=3||i==5&&j>=2&&j<=3||j==4||j==5&&i==6)
                    printf("* ");    
                else
                printf("  ");
                
            }
            printf("\n");
        }
}
int main()
{
    pattern();
    return 0;
}
