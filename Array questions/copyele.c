 #include<stdio.h>
 void copy(int []);
  void copy(int a[])
   {
    int b[50],n,i;
   printf("enter the size of array\n");
    scanf("%d",&n);
   printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
     for(i=0;i<n;i++)
      {
       b[i]=a[i];
      }
   printf("first array\n");
    for(i=0;i<n;i++)
   printf("%d \n",a[i]);
   
   printf("second array\n");
    for(i=0;i<n;i++)
   printf("%d  ",b[i]);
   }
  void main()
 {
  int x[50];
  copy(x);
   
 }
