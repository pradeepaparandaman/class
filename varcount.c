#include<stdio.h>
int main()
{
	char a[10];
	int i,count[30]={0},n,res=0,diff;
	scanf("%s",a);
	for(n=0;a[n]!='\0';n++);
	for(i=0;i<n;i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
		{
			diff=a[i]-'A';
			if(count[diff]==0)
			{
				count[diff]=1;
				res++;
			}
		}
	}
	printf("%d\t",res);
	return 0;
}	
