#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k;
	printf("Enter the rows=");
	scanf("%d",&n);
	char str[10]="* ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		printf("%s",str);
		strcat(str,"* ");
		/*
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		*/
		printf("\n");
	}
}
