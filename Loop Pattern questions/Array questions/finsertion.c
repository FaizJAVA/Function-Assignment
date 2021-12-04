#include<stdio.h>
#include<stdlib.h>
void insert(int []);
void insert(int a[]){
    int n=5,element=100,position=2;
    for(int i=n-1; i>=position-1; i--){
        a[i+1]=a[i];
    }
    a[position-1]=element;
    n=n+1;
    printf("After insertion\n");
    for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
}
int main()
{
    int x[]={10,20,30,40,50};
    insert(x);
    
    return 0;
}