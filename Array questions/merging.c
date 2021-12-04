#include<stdio.h>
  void merge(int [],int []);
   void merge(int a[],int b[])
    {
      int Merged[20];
    int n1,n2,n3,i,j;
       printf("Please Enter the First Array Size\n");
       scanf("%d", &n1);
       printf("\nPlease Enter the First Array Elements\n");
       for(i = 0; i < n1; i++)
  	{
          scanf("%d", &a[i]);
  	}
     printf("Please Enter the Second Array Size\n");
     scanf("%d", &n2);
   
      printf("Please Enter the Second Array Elements\n");
       for(i=0;i<n2;i++)
  	{
          scanf("%d",&b[i]);
  	}
  	
  	for(i=0;i<n1;i++)
  	{
          Merged[i] = a[i];
  	}
	n3=n1+n2;
        for(i=0,j=n1;j<n3 && i<n2;i++,j++)
  	{
  	  Merged[j]=b[i];
  	}
       printf("a[%d] Array Elements After Merging\n",n3); 
 	for(i=0;i<n3;i++)
  	{
    	printf("%d \t",Merged[i]);
  	}
 }
void main()
{
    
    int a[10],b[10];
     merge(a,b);
}
