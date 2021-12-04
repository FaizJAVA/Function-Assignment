#include<stdio.h>
void negative(int a[])
{
	int pos[9],neg[9],i,j=0,k=0;

	for(i=0;i<10;i++)
	{
	if(a[i]>=0)
	pos[j++]=a[i];
	else
	neg[k++]=a[i];
	}
   for(i=0;i<k;i++)
printf("%4d\n",neg[i]);

}
int main(){

int a[]={9,4,-2,-1,5,8,5,-3,2,-9};
negative(a);


return 0;
}
