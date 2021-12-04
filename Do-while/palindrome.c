#include<stdio.h>
int palindrome(int);
int palindrome(int n){
    int i,r,temp,sum=0;
    temp=n;
    do{
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }while(n!=0);
    if(sum==temp){
        printf("Palindrome");
    }
    else
    printf("Not a Palindrome");
}
int main()
{
    palindrome(121);
    return 0;
}