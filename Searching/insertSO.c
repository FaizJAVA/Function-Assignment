#include <stdio.h>
int insert(int[]);
int insert(int x[]){
    int i, j, n = 5, temp;

    for (i = 1; i < n; i++)
    {
        j = i - 1;
    }
    temp = x[i];

    while (j >= 0 && x[j] > temp)
    {
        x[j + 1] = x[j];
        j--;
    }
    x[j + 1] = temp;
    for (j = 0; j < n; j++)
    {
        printf("%d", x[j]);
    }
}
int main()
{
    int a[] = {2, 6, 4, 8, 1};
    insert(a);
    return 0;
}
