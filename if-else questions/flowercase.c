#include<stdio.h>
void upplowercase(char);
void upplowercase(char ch)
{
	if(ch >= 65 && ch <= 90)
	  printf("%c is Uppercase\n",ch);
	else if(ch >= 97&& ch <= 122)
	  printf("%c is Lowercase\n",ch);
	else if(ch >= 48 && ch <= 57)
	  printf("The entered chactar is a digit %c\n",ch);
	else
	  printf("%c is special charctar",ch);
}
int main()
{
	char ch;
	printf("Enter any character:\n");
	scanf("%c",&ch);
	
    upplowercase(ch);
   
    return 0;
}