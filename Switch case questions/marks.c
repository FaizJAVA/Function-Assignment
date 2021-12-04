#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter Marks from 0 to 100 to get grade:\n");
    scanf("%d", &num);
    switch (num / 10)
    {
    case 4:
        printf("E grade");
        break;
    case 5:
        printf("D grade");
        break;
    case 6:
        printf("C Greade");
        break;
    case 7:
        printf("B grade");
        break;
    case 8:
        printf("A grade");
        break;
    case 9:
        printf("A grade");
        break;
    case 10:
        printf("A grade");
        break;
    default:
        printf("Fail\n");
        break;
    }
    return 0;
}
