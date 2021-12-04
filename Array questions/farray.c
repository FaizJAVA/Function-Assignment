#include<stdio.h>
void update(int []);
void update(int a[]){
    for(int i=0; i<5; i++){
        a[i]=a[i]+1;
    }
}

int main()
{
    int a[]={10,20,30,40,50};
    update(a);
    for(int i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
