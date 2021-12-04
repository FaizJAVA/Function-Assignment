#include<stdio.h>
float si(float,float,float);
float si(float x,float y,float z){
    float sum;
    sum=x*y*z/100;
    return sum;
}
int main()
{
    printf("%.2f",si(100,2,20));
    return 0;
}

