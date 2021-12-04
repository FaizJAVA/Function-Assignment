#include<stdio.h>
float triangle(float,float);
float triangle(float x,float y){
    float area;
    area=x*y/2;
    return area;
}
int main()
{
    
    printf("%.2f",triangle(3,3));
    return 0;
}
