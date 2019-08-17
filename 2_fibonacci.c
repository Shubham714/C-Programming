#include<stdio.h>
int main()
{
	int first=0,second=1,next,n,i;
	printf("Enter the value of n=");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d\t",first);
	}
	else if(n==2)
	{
		printf("%d\t",second);
	}
	else
	{
		for(i=3;i<=n;i++)
		{
			next=first+second;
			first=second;
			second=next;
		}
	}
	if(n>2)
	{
		printf("%d",next);
	}
	return 0;
}
