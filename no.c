#include<stdio.h>
int main()
{
	int n,a[n],i,x;
	printf("n");
	scanf("%d",&n);
	printf("array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=n/2;
	if(n%2==0)
	{
		for(i=x;i<n;i++)
		{
			printf("%d",a[i]);
		}
		for(i=0;i<x;i++)
		{
			printf("%d",a[i]);
		}
	}
	else 
	{
		for(i=x+1;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("%d",a[x]);
		for(i=0;i<x;i++)
		{
			printf("%d",a[i]);
		}
	}	
}