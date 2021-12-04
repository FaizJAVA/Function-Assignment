#include<stdio.h>
 void rep(int []);
  void rep(int x [])
   {
    int n,i,j,count=0;
    printf("enter the size of array\n");
     scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
     scanf("%d",&x[i]);
     for(i=0;i<n;i++)
      {
       for(j=i+1;i<n;i++)
        {
         if(x[i]==x[j])
          count++;
        }
      }
   printf("total repeating elements are %d\n",count);
   }
 void main()
{
  int a[50];
    rep(a);
  } 
  
