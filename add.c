#include<stdio.h>
main()
{
	int a[10],b[10],c[10],d[10],start,end,a1,b1,i;
	printf("...");
	scanf("%d%d",&a1,&b1);
	printf("...");
	for(i=0;i<a1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("...");
	for(i=0;i<b1;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("...");
	scanf("%d%d",&start,&end);
	sum(a,b,c,a1,b1);
	sum1(a,b,d,start,end);
	printf("...");
	for(i=0;(i<a1||i<b1);i++)
	{
		printf("%d\t",c[i]);
	}
	printf("...");
	for(i=start;i<end;i++)
	{
		printf("\n%d",d[i]);
	}
}
int sum(int a[],int b[],int c[],int a1,int b1)
{
	int i;
	for(i=0;(i<a1||i<b1);i++)
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
