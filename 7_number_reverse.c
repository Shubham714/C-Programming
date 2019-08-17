#include<stdio.h>
void main()
{
	int number,rev=0;
	printf("Enter the number=");
	scanf("%d",&number);
	while(number>0)
	{
		rev=rev*10+number%10;
		number=number/10;
	}
	printf("%d",rev);
}
