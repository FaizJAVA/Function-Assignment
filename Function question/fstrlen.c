#include<stdio.h>
#include<string.h>
int str_len(char[]);
int str_len(char s[]) {
   int c = 0,i=0;
   
   for(i=0;s[i]!='\0';i++);
     
   return i;
}

int main()
{
    char s[100];
    int x; 
    printf("Enter a string\n");
    gets(s);
    x=str_len(s);
    printf("%d",x);
    return 0;
}
