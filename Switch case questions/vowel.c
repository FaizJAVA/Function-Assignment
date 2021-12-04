#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a letter to check whether it is vowel or not\n");
    scanf("%c", &ch);

    switch (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
    case 0:
        printf("Consonent\n");
        break;
    case 1:
        printf("Vowel\n");
        break;    

        default:
            break;
        
    }

    return 0;
}