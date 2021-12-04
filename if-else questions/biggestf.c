#include<stdio.h>
int great(int,int,int);
int main()
{
	int a,b,c;
	int result;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	result = great(a,b,c);
	printf("Biggestnumber is :%d\n",result);
	return 0;
	
}
int great(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		 return a;
		else
		 return c;
	}
	else
	{
		if(b>c)
		  return b;
		else
		  return c;
	}
}