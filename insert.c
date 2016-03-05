#include<stdio.h>
int main()
{
	int n,a[10],i=0,x,j,b[10];
	printf("n");
	scanf("%d",&n);
	printf("X");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		if(a[i]>x)
		{
			j=i;
			
			while(a[j]==a[i+1])
			{
				j=i+1;
				i++;
				
			}
			printf("%d",j);
			break;
		}
		
		
		else if(a[i]==a[n-1])
		{
			
			printf("-1");
			break;
		}
	}
}				
	
