#include<stdio.h>
int main()
{
    int x[3][3]={{1,5,5},{4,6,8},{9,5,4}};
    int y[3][3]={{6,2,5},{4,12,3},{4,3,4}};
    int sub[3][3]={{},{},{}};
    int i,j;
    printf("X matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d",x[i][j]);
        }
        printf("\n");
    }
    printf("Y matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d",y[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sub[i][j]=x[i][j]-y[i][j];
        }
    }
    printf("After Substraction matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
