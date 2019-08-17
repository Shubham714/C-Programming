#include<stdio.h>
int main()
{
	char str[20]="Raja Software Labs";
	int space[5]={0,0,0,0,0},i=0,k=0,j;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			space[k]=i;
			k++;
		}
		i++;
	}
	space[k]=i;
	for(i=k;i>=0;i--)
	{
		if(i==0)
		{
			for(j=0;j<=space[i];j++)
			{
				printf("%c",str[j]);
			}
		}
		else
		{
			for(j=space[i-1]+1;j<space[i];j++)
			{
				printf("%c",str[j]);
			}
		}
		printf(" ");
	}
	return 0;
}
