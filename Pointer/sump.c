#include<stdio.h>
int main()
{
    int a=20, *p; 
    int b=40,*q ;
    int c,*r ;
    
    p=&a;
    q=&b;
    r=&c;
    // Addition of a and b
    *r=*p+*q;
    
    printf(" %d",*r);
    return 0;
}
