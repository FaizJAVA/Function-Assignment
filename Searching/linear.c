#include<stdio.h>
int linear(int[]);
int linear(int x[]){
    int i,element=55;
    for(i=0; i<6; i++){
        if (element==x[i])
            break;
    }
    if (i<6)
        printf("ELement Found at index %d-%d\n",i,x[i]);
    else
        printf("Element Not FOund");
}
int main()
{
    int a[]={10,50,90,18,55,60};
    linear(a);
    
    return 0;
}