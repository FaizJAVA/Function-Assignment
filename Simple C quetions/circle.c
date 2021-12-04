#include<stdio.h>
float area(float);
float circum(float);
int main()
{
    printf("%.2f\n",area(3));
    printf("%.2f\n",circum(3));
    
    return 0;
}
float area(float x){
    float sum;
    sum=3.14*x*x;
    return sum;
}
float circum(float x){
    float sum;
    sum=2*3.14*x;
}
