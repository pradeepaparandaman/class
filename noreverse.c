#include <stdio.h>
int main()
{
	int n,arr[n],i,temp;
	printf("no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	for(temp=0,i=0;i<(n/2);i++)
	{
		temp=arr[n-i];
		arr[n-i]=arr[(n/2)-i];
		arr[(n/2)-i]=temp;
	} 
	for(i=1;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
 	return 0;
}
