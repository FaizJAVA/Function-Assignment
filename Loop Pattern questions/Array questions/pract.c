#include<stdio.h>
void ghee(int []);
void ghee(int a[]){
    for(int i=0; i<5; i++){
        a[i]=a[i]+1;
    }
}
int main()
{
    int a[]={10,20,30,40,50};
    int i;
    ghee(a);
    for(int i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
