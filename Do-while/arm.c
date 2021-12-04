#include<stdio.h>
int arm(int);
int arm(int n){
    int i,r,temp,sum=0;
    temp=n;
    do
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }while(n!=0);
    if(sum==temp)
	{
        printf("Armstrong");
    }
    else
    printf("Not a armstrong");
}
int main()
{
    arm(153);
    return 0;
}