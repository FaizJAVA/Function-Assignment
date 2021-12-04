#include <stdio.h>
int main()
{
    char symbol;
    int a, b, sum;
    printf("Please Enter Symber + to perform addition of two number:\n");
    printf("Please Enter Symber - to perform substraction of two number:\n");
    printf("Please Enter Symber * to perform multiplication of two number:\n");
    printf("Please Enter Symber / to perform division of two number:\n");
    scanf("%c", &symbol);
    switch (symbol)
    {
    case '+':
        printf("Enter number 1:\n");
        scanf("%d", &a);
        printf("Enter number 2:\n");
        scanf("%d", &b);
        sum = a + b;
        printf("%d", sum);
        break;
    case '-':
        printf("Enter number 1:\n");
        scanf("%d", &a);
        printf("Enter number 2:\n");
        scanf("%d", &b);
        sum = a - b;

        printf("%d", sum);
        break;
    case '*':
        printf("Enter number 1:\n");
        scanf("%d", &a);
        printf("Enter number 2:\n");
        scanf("%d", &b);
        sum = a * b;

        printf("%d", sum);
        break;
    case '/':
        printf("Enter number 1:\n");
        scanf("%d", &a);
        printf("Enter number 2:\n");
        scanf("%d", &b);
        sum = a / b;

        printf("%d", sum);
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}
