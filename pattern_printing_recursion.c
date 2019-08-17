#include<stdio.h>
void pattern(int n)
{
	int i;
	if(n>0)
	{
		pattern(n-1);
		for(i=0;i<n;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void main()
{
	pattern(10);
}
