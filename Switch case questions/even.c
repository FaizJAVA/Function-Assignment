#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter Number to get even or odd:\n");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 0:
        printf("Odd\n");
        break;
    case 1:
        printf("Even\n");
        break;
    }
    return 0;
}
