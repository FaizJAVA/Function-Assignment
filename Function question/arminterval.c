#include<stdio.h>
int arm(int);
int arm(int n){
    int i=101,r,sum=0;
    
    while (i<=999)
    {
    n=i;
    sum=0;
        while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
        }
        if (sum==i)
           printf("%d\n",sum);
        
        
    i++;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    arm(a);
    return 0;
}