#include<stdio.h>
int main()
{
    int a[]={10,20,5,3,50},b[100];
    int *p,*q,i;
    p=&a[0];
    q=&b[0];
    for(i=0; i<5; i++){
        *(q+i)=*(p+i);
    }
    for(i=0; i<5; i++){
        printf("%d\n",*(q+i));
    }
    return 0;
}
