#include<stdlib.h>
#include<stdio.h>
void gk(int []);
void gk(int x[]){
    int temp;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d\n",x[i]);
    }
}
int main()
{
    int a[]={10,5,8,9,15};
    gk(a);
    
    return 0;
}
