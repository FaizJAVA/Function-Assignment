#include<stdio.h>
int bin(int[]);
int bin(int x[]){
    
    int mid,high=5,low=0,element=15;

    
    while(low<=high){
        mid=(low+high)/2;
        if(x[mid]==element)
        break;
        else if(element>x[mid])
        low=mid+1;
        else
        high=mid-1;
    }

    if(low<=high)
        printf("Element Found\n");  
    else
        printf("Element Not Found\n");
}
int main()
{
    int a[]={10,15,20,25,30};
    bin(a);
    return 0;
}
