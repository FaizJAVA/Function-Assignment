#include<stdio.h>
void p();
void p(){
    int i,j,k,l,m;
    for(i=1; i<=5; i++){
        for(j=5; j>=i; j--){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("*");
        }
        for(l=2; l<=i; l++){
            printf("*");
        }
        

        printf("\n");
    }
    for(i=2; i<=5; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=5; k>=i; k--){
            printf("*");
        }
        for(l=4; l>=i; l--){
            printf("*");
        }
        

        printf("\n");
    }

}
int main()
{
    p();
    return 0;
}
