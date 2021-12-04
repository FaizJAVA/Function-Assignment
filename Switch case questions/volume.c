#include<stdio.h>
#include<conio.h>

int main()
{

float radius=0.0,height=0.0;
int choice;
const float pi=3.14;
printf("Enter 1 to calculate Area of Circle\n");
printf("Enter 2 to calculate Circumference of Circle\n");
printf("Enter 3 to calculate Volume of Cylinder\n");
scanf("%d",&choice);

switch (choice)
{
case 1:
 printf("Enter Radius of Circle:");
 scanf("%f",&radius);
    printf("Area of Circle = %.5f\n",radius*radius*pi);
   break;
case 2:
 printf("Enter Radius of Circle:\n");
 scanf("%f",&radius);
    printf("Circumference of Circle = %.5f\n",2*radius*pi);
    break;
case 3:
 printf("Enter Radius of Cylinder:\n");
 scanf("%f",&radius);
    printf("Enter Height of Cylinder:\n");
    scanf("%f",&height);
    printf("Volume of cylinder = %.5f\n",radius*radius*pi*height);
    break;
default:
 printf("Invalid Choice\n");
   break;
}

return 0;
}
