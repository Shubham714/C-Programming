#include<stdio.h>
void main()
{
	int number,i;
	printf("Enter the number=");
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",number*i);
	}
}
