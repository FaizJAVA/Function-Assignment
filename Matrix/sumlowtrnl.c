#include <stdio.h>
void main()
{
  int r, c, a[3][3], sum = 0;
  printf("enter the elemetns of matrixs\n");
  for (r = 0; r < 3; r++)
  {
    for (c = 0; c < 3; c++)
    {
      scanf("%d", &a[r][c]);
    }
  }
  printf("matrix is ..................\n");
  for (r = 0; r < 3; r++)
  {
    for (c = 0; c < 3; c++)
    {
      printf("%d ", a[r][c]);
    }
    printf("\n");
  }
  printf("lower triangular is \n");
  printf("...........................\n");
  for (r = 0; r < 3; r++)
  {
    for (c = 0; c < 3; c++)
    {
      if (r >= c)
        sum = sum + a[r][c];
    }
  }
  printf("sum of lower tringular=%d\n", sum);
}
