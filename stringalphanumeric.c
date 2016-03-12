#include<stdio.h>
#include<string.h>
int main()
{
	char op[10][32];
	int i,in=0;
	char str[10][32]={"a","b","32","a3","b3"};
	for(i=0;i<5;i++)
	{	
		if(!func(str[i]))
		{	
			strcpy(op[in],str[i]);
			in++;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\t",op[i]);

	}
	return 0;
}
int func(char str[])
{
	int y,i;
	y=strlen(str);
	for(i=0;i<y;i++)
	{
		if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
		{
			return 0;
		}
	}
	return 1;
}
