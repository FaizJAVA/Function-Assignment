#include<stdio.h>
#include<string.h>
void abbr(char *first,char *middle,char *last)
{
	printf("%c.",first[0]);
	printf("%c.",middle[0]);
	printf("%s",last);
}
int main()
{
	char first[15],middle[15];
	char last[15];
	printf("Enter your full name as per condition (First Middle Last)=");
	scanf("%s",first);
	scanf("%s",middle);
	scanf("%s",last);
	abbr(first,middle,last);

	return 0;
}