//printing negetives elements in array 
#include<stdio.h>
 void neg(int[]);
  void neg(int x[])
   {
     int i,n;
    printf("Enter the size of array\n");
     scanf("%d",&n);
      printf("Enter %d elements of array\n",n);
       for(i=0;i<n;i++)
      scanf("%d",&x[i]);
         
      printf("All negative elements are\n");
       for(int i=0;i<n;i++)
       {
        if(x[i]<0)
         printf("%d\n",x[i]);
       }
   
   }
 void main()
 {
   int a[50];
      neg(a);
    
  } 
