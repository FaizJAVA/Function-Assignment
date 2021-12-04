#include<stdio.h>
void checkAllsides(int,int,int);
void checkAllsides(int side1,int side2,int side3)
{
	if(side1 == side2 && side2 == side3)
	   printf("Triangle is equilateral\n");
	else if (side1 == side2 || side2 == side3 || side3 == side1)
	   printf("Triangle is isosceles\n");
	else
	   printf("Triangle is scalene\n");
	
	
}
int main()
{ 
    int side1,side2,side3;
    printf("Enter three sides of triangle :\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    checkAllsides(side1,side2,side3);
	return 0;
}