#include<stdio.h>
float area(float);
int main()
{
    printf("%.2f\n",area(3));
    
    return 0;
}
float area(float x){
    float sum;
    sum=3.14*x*x;
    return sum;
}

