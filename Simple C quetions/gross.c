#include<stdio.h>
#include<conio.h>
void gros();
void gros(){
    int basic;
   float gross,da, ta;

   printf("\n Enter Basic Salary : ");
   scanf("%d", &basic);

   da = 0.1 * basic;
   ta = 0.12 * basic;

   gross = basic + da + ta;

   printf("\n Your Gross Salary is : %.2f",gross);
}

int main()
{
   gros();

    return 0;
}
