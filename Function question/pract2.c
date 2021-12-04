#include<stdio.h>
int main()
{
    int a[]={10,20,5,3,50};
    int *p,i,j,temp;
    p=&a[0];
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(*(p+i)>*(p+j)){
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d",*(p+i));
    }
    return 0;
}
