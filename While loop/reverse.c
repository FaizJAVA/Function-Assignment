#include<stdio.h>
int rev(int);
int rev(int n){
    int i,r;
    while(n!=0){
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
}
int main()
{
    rev(123);
    return 0;
}
