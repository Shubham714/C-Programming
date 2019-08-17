#include<stdio.h>
void main()
{
	int number,i,j;
	int binary[20];
	printf("Enter the number=");
	scanf("%d",&number);
	while(number>0)
	{
		binary[i++]=number%2;
		number/=2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
}
