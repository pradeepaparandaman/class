#include<stdio.h>
#include<string.h>
int main()
{
	char op[10][32];
	int i,in=0,j=0;
	char str[10][32]={"a","b","32","a","b"};
		for(i=0;i<5;i++)
		{
			for(j=1;(strcmp(str[i],str[j])!=0),j<=4;j++)
			{
			strcpy(op[in],str[j]);
			in++;
			}
	}
	op[5]='\0';
	printf("\n%s\t",op[in]);
	printf("\n%d\t",in);
	for(i=0;i<5;i++)
	{
		printf("\n%s\t",op[i]);

	}
	return 0;
}
