#include<stdio.h>
int main()
{
    int x[3][3]={{1,5,5},{4,6,8},{9,5,4}};
    
    int i,j;
    printf("X matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j)
            printf("%4d",x[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
