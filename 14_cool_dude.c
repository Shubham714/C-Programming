#include<stdio.h>
void main()
{
	int i;
	for(i=100;i<=500;i++)
	{
		if(i%5==0 && i%11==0)
		{
			printf("%d cool dude\n",i);
		}
		else if(i%5==0)
		{
			printf("%d cool\n",i);
		}
		else if(i%11==0)
		{
			printf("%d dude\n",i);
		}
	}
}
