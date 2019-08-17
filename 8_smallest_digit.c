#include<stdio.h>
#include<limits.h>
void main()
{
	int number=13892,min=INT_MAX;
	while(number>0)
	{
		if(number%10<min)
		{
			min=number%10;
		}
		number=number/10;
	}
	printf("%d",min);
}
