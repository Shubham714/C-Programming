#include<stdio.h>
int main()
{
	char str[5]="123";
	int number=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		number=number*10+str[i]-'0';
	}
	printf("%d",number);
	return 0;
}
