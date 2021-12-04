 #include<stdio.h>
  int negative(int []);
   int negative(int x[])
    {
      int count=0,i;
       for(i=0;i<13;i++)
        {
          if(x[i]<0)
           count++;
        }
       return count;
    };
   
  void main()
  {
   int a[]={-1,-2,3,4,5,1,2,3,4,6,5,7,-1,6},neg;
    neg=negative(a);
     printf("%d is total negative numbers\n",neg);
  
  }
