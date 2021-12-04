#include <stdio.h>
#include <stdlib.h>
void insert(int[]);
void insert(int a[])
{
    int n = 6, k;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                // decrease the size of array after removing duplicate element
                n--;

                // if the position of the elements is changes, don't increase the index j
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int x[] = {10, 20, 20, 30, 40, 50};
    insert(x);

    return 0;
}