#include<stdio.h>
int main()
{
    int a[10],b[10],temp,*p,*q,i,n;
    printf("Please enter size of Array\n");
    scanf("%d",&n);
    p=&a[0];
    q=&b[0];
    printf("Please Enter First array element\n");
    for(i=0; i<n; i++){
        scanf("%d",(p+i));
    }
    printf("Please Enter Second array element\n");
    for(i=0; i<n; i++){
        scanf("%d",(q+i));
    }
    
    for(i=0; i<n; i++){
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
    printf("After Swapping array elements in first array\n");
    for(i=0; i<n; i++){
        printf("%d\n",*(p+i));
    }
    printf("After Swapping array elements in first array\n");
    for(i=0; i<n; i++){
        printf("%d\n",*(q+i));
    }
    
    return 0;
}