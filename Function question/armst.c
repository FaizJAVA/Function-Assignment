#include<stdio.h>
int arm(int);
int prime(int);
int prime(int n){
    int count=0,i=1;
    while (i<=n)
    {
        if (n%i==0)
        {
            count++;
        }
        
       i++;
    }
    if (count==2)
    {
        printf("\nPrime Number.\n");
    }
    else{
        printf("\nNot a Prime Number.\n");
    }
}
int arm(int n){
    int i,r,temp,sum=0;
    temp=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp){
        printf("\nArmstrong");
    }
    else
    printf("\nNot a armstrong");
}
int main()
{
    arm(153);
    prime(17);
    return 0;
}