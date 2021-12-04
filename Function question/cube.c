#include<stdio.h>
void cub(int);
void cub(int n){
    printf("%d",n*n*n);
}
int main()
{
    cub(3);
    return 0;
}
