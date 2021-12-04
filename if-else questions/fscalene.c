#include<stdio.h>
void sca();
void sca(){
    int AB,BC,CA;
    printf("Enter AB Length: \n");
    scanf("%d",&AB);
    printf("Enter BC Length: \n");
    scanf("%d",&BC);
    printf("Enter AB Length: \n");
    scanf("%d",&CA);
    if((AB==BC)&&(BC==CA)){
        printf("Triangle is Equilateral\n");

    }
    else if((AB==BC)||(BC==CA)||(AB==CA)){
        printf("Triangle is Isoceles\n");

    }
    else{
        printf("Triangle is Scalene\n");
    }
}
int main()
{
    sca();
    return 0;
}
