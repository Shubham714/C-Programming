#include<stdio.h>
int num=4;
print(int n)
{
	if(n>0)
	{
		int space=num-n,i,j;
		for(i=0;i<space;i++)
		{
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
		print(n-1);
	}
	
}
void main()
{
	print(num);
}
