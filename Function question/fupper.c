#include <stdio.h>
#include <string.h>
void Upcase(char[]);
void Upcase(char x[]){
    int i;
    for (i = 0; x[i] != '\0'; i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        x[i]=x[i]-32;
        printf("%c",x[i]);
    }
}
int main()
{
    char a[] = "hELLO";
    Upcase(a);
    

    return 0;
}
