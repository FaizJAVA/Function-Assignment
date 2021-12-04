#include<stdio.h>
void gre();
void gre(){
    int num, num2;

    printf("Enter any number: ");
    scanf("%d", &num);
    scanf("%d", &num2);

    switch (num > num2)
    {
    case 1:
        printf("%d is greater", num);
        break;
    case 0:
        switch (num < num2)
        {
        case 1:
            printf("%d is Greater", num2);
            break;

        default:
            break;
        }
    }
}
int main()
{
    gre();
    return 0;
}
