#include<stdio.h>
int percentage(int,int,int,int,int);
int percentage(int hindi,int english,int math,int science,int computer )
{
	float per;
	int sum =0;
	int total=500;
	sum=hindi+english+math+science+computer;
	per=(sum*100)/total;
	return per;
}
int main()
{
	int s1=52;
	int s2=55;
	int s3=69;
	int s4=99;
	int s5=89;
	float p;
	p=percentage(s1,s2,s3,s4,s5);
	printf("persentage of 5 subject %f",p);
}