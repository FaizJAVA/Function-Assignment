#include<stdlib.h>
#include<stdio.h>
void del(int []);
void del(int x[]){
    int n=5, position=2;
    for(int i=position; i<n; i++ ){
        x[i-1]=x[i];
    }
    for(int i=0; i<n-1; i++){
        printf("%d",x[i]);
    }
}
int main()
{
    int a[]={10,20,30,40,50};
    del(a);

    return 0;
}
