#include <stdio.h>
void gcd();
void gcd()
{
    int a, b, i, hcf;

    a = 12;
    b = 16;

    for (i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF = %d", hcf);
}

int main()
{
    gcm();
    return 0;
}