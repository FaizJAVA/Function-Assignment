#include<stdio.h>
void pos();
void pos(){
    int num;

    printf("Enter any number to find wether it is negative,positive or zero: \n");
    scanf("%d", &num);

    switch (num > 0)
    {

    case 1:
        printf("%d is positive.", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is negative.", num);
            break;
        case 0:
            printf("%d is zero.", num);
            break;
        }
        break;
    }
}
int main()
{
    pos();
    return 0;
}