#include <stdio.h>
void sep(int[]);
void sep(int x[])
{
   int arr2[10], arr3[10];
   int i, j = 0, k = 0, n;
   printf("Enter the size of array\n:");
   scanf("%d", &n);
   printf("Input %d elements in the array :\n", n);
   for (i = 0; i < n; i++)
   {
      printf("Element : %d : ", i);
      scanf("%d", &x[i]);
   }
   for (i = 0; i < n; i++)
   {
      if (x[i] % 2 == 0)
      {
         arr2[j] = x[i];
         j++;
      }
      else
      {
         arr3[k] = x[i];
         k++;
      }
   }
   printf("The Even elements are : \n");
   for (i = 0; i < j; i++)
   {
      printf("%d ", arr2[i]);
   }
   printf("The Odd elements are :\n");
   for (i = 0; i < k; i++)
   {
      printf("%d ", arr3[i]);
   }
   printf("\n");
}
void main()
{
   int arr1[10];
   sep(arr1);
}
