#include<stdio.h>
int main()
{
    int a[10],b[10],temp,*p,i,n;
    printf("Please enter size of Array\n");
    scanf("%d",&n);
    p=&a[0];
    printf("Please Enter First array element\n");
    for(i=0; i<n; i++){
        scanf("%d",(p+i));
    }
    
    printf("After Reversing array elements in first array\n");
    for(i=n-1; i>1; i--){
        printf("%d\n",*(p+i));
    }
    
    
    return 0;
}
