#include<stdio.h>
void swap(int *,int *);

void swap(int *p,int *q){
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int main()
{
    int a,b;
    printf("Enter a and b value:\n");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
