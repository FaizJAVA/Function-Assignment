#include<stdio.h>
int main()
{
    //int a[]={10,20,30,40,50},*p,n=5;
    int a[10],i,*p,n;
    printf("Please Enter Array size\n");
    scanf("%d",&n);
    printf("Enter Array Element\n");
    p=a;
    for(i=0; i<n; i++){
        scanf("%d",(p+i));
    }
    
    for(int i=0; i<n; i++){
        printf("%d\n",*(p+i));
    }

    return 0;
}
