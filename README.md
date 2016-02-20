#include<stdio.h>
main()
{
	int n,s,g,d,r[20],i,start,end;
    scanf("%d%d%d%d%d",&n,&s,&d,&start,&end);
    for(i=0;i<n;i++)
    {
		r[i]=s;
	    s=s*d;
	}
 	n=ap(r,n,start,end);
	g=sum(r,n);
}
int ap(int r[],int n,int start,int end)
{
	int i;
	for(i=start;i<end;i++)
	{
		printf("%d\t",r[i]);
	}
	return 0;
}
char sum(int r[],int n)
{
	char s=0,i;
	for(i=0;i<n;i++)
		{
			s+=r[i];
		}
	printf("\n%d",s);
	
}
