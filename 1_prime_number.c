#include<stdio.h>
int main()
{
	int num,flag=0,i,to;
	printf("Enter the number=");
	scanf("%d",&num);
	to=num/2;
	for(i=2;i<=to;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
	return 0;
}
