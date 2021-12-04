#include<stdio.h>
int fact(int);
int fact(int n)
{
	int f=1;
	int i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n;
	printf("Enter value of n");
	scanf("%d",&n);
	int x;
	x=fact(n);
	printf("%d",x);
}