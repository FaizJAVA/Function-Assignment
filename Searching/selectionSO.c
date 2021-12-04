#include<stdio.h>
int selec(int[]);
int selec(int x[]){
    
    int i,j,temp;
    for(i=0; i<4; i++){
        for(j=i+1; j<5; j++){
        if(x[i]>x[i+1]){
            temp=x[i];
            x[i]=x[i+1];
            x[i+1]=temp;
        }
        }
    }
    for(i=0; i<5; i++){
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[5]={10,2,5,8,9};
    selec(a);   
    return 0;
}
