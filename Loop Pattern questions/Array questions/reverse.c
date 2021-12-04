#include<stdio.h>
 void reverse(int []);
  void reverse(int x[])
   {
    int n,i;
  printf("Enter the size of array\n");
   scanf("%d",&n);
   printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
   scanf("%d",&x[i]);
   
    printf("Array in reverse array\n");
     for(i=n-1;i>=0;i--)
    printf("%d\n",x[i]);
    }
 void main()
{
 int a[100];
  reverse(a);
}
