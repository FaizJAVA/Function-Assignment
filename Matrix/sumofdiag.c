#include<stdio.h>
 void main()
{
 int r,c,a[3][3],sum=0;
  
   printf("enter the matrix\n");
    for(r=0;r<3;r++)
     {
      for(c=0;c<3;c++)
       {
        scanf("%d",&a[r][c]);
       }
     }
    for(r=0;r<3;r++)
     {
      sum=sum+a[r][r];
     }
    printf("the sum is %d\n",sum);
  
}
