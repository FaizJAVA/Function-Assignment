#include<stdio.h>
int bubble(int[]);
int bubble(int x[]){
    int i,j,temp;
    for(i=0; i<5; i++){
        for(j=1; j<5-i; j++){
            if(x[j-1]>x[j]){
                temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;

            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[]={10,5,10,3,4};
    bubble(a);
    return 0;
}