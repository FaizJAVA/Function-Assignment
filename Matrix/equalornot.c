#include<stdio.h>
 void main()
{
 int r,c,a[3][3],b[3][3],equal=1;
  
    printf("enter the 1st matrix\n");
     for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
        {
         scanf("%d",&a[r][c]);
        }
      }
     printf("enter 2nd matrics\n");
       for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
        {
         scanf("%d",&b[r][c]);
        }
      }
      for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
        {
         if(a[r][c]!=b[r][c])
           equal=0;
        }
      }
    if(equal)
     printf("string is same\n");
    else
     printf("string is not same\n");
}
