#include <stdio.h>
void ascend(int[]);
void ascend(int x[])
{
  int i, j, a, n;
  printf("Enter the value of N \n");
  scanf("%d", &n);
  printf("Enter the numbers \n");
  for (i = 0; i < n; ++i)
    scanf("%d", &x[i]);
  for (i = 0; i < n; ++i)
  {
    for (j = i + 1; j < n; ++j)
    {
      if (x[i] > x[j])
      {
        a = x[i];
        x[i] = x[j];
        x[j] = a;
      }
    }
  }
  printf("The numbers arranged in Ascending order are given below \n");
  for (i = 0; i < n; ++i)
    printf("%d\n", x[i]);
}
void main()
{
  int a[30];
  ascend(a);
}
