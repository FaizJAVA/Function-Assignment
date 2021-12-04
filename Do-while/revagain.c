#include<stdio.h>
int rev(int);
int rev(int n){
    int i,r;
    do{
        r=n%10;
        n=n/10;
        printf("%d",r);
    }while(n!=0);
}
int main()
{
    rev(564);
    return 0;
}
