#include <stdio.h>
#include <string.h>
void lowcase(char[]);
void lowcase(char x[]){
    int i;
    for (i = 0; x[i] != '\0'; i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        x[i]=x[i]+32;
        printf("%c",x[i]);
    }
}
int main()
{
    char a[] = "hELLO";
    lowcase(a);
    

    return 0;
}
