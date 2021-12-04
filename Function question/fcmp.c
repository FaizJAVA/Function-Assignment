#include <string.h>
#include <stdio.h>
int main()
{
    char s1[1000], s2[1000];
    int i, c, g;
    printf("Enter String 1\n");
    gets(s1);
    printf("Enter String 2\n");
    gets(s2);
    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (i = 0; s2[i] != '\0'; i++)
        ;
    if (s1[i] == s2[i])
    {
        for (i = 0; s2[i] != '\0'; i++)
        {
            if (s1[i] == s2[i])
                c++;
        }
    }

    return 0;
}
