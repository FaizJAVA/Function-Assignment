#include <stdio.h>
int even(int[]);
int odd(int[]);
void main()
{

  int a[] = {5, -22, 4, -6, -7, 41, -9, 4, -6, 2, -3}, eve, od;
  eve = even(a);
  od = odd(a);
  printf("%d is total even\n%d is total odd\n", eve, od);
}
int even(int a[])
{
  int i, count = 0;

  for (i = 0; i < 11; i++)
  {
    if (a[i] % 2 == 0)
      count++;
  }
  return count;
}
int odd(int a[])
{
  unsigned int count1 = 0, i;
  for (i = 0; i < 11; i++)
  {
    if (a[i] % 2 != 0)
      count1++;
  }
  return count1;
}
