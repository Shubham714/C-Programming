#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the rows=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			for(j=0;j<n;j++)
			{
				printf("* ");
			}
		}
		else
		{
			for(j=0;j<n-i-1;j++)
			{
				printf(" ");
			}
			if(i==0)
			{
				printf("* ");
				printf("\n");
			}
			else
			{
				printf("* ");
				for(k=0;k<2*i-1;k++)
				{
					printf(" ");
				}
				printf("* ");
				printf("\n");
			}
		}
		
	}
}
