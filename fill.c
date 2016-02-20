#include<stdio.h>
main()
{
	int a[4]={1,2,3},b[4]={1,2,3},c[4],d[4],start,end,size=3,i;
	scanf("%d%d",&start,&end);
	sum(a,b,c,size);
	sum1(a,b,d,start,end);
	for(i=0;i<size;i++)
	{
		printf("%d\t",c[i]);
	}
	for(i=start;i<end;i++)
	{
		printf("\n%d",d[i]);
	}
}
int sum(int a[],int b[],int c[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		c[i]=a[i]+b[i];
	}
	return 0;
}
int sum1(int a[],int b[],int d[],int start,int end)
{
	int i;
	for(i=start;i<end;i++)
	{
		d[i]=a[i]+b[i];
	}
	return 0;
}
