#include <stdio.h>
void fk();
void fk(){
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
}
int main()
{
    fk();
    return 0;
}
