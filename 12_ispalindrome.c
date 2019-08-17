#include<stdio.h>
int xstrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
int ispalindrom(char str[],int length)
{
	int result=1;
	int i=0,j=length-1;
	while(i<j)
	{
		if(str[i]==str[j])
		{
			i++;j--;
		}
		else
		{
			result=-1;
			return result;
		}
	}
	return result;
}
int main()
{
	int length;
	char str[20];
	printf("Enter the string=");
	scanf("%s",str);
	length=xstrlen(str);
	if(ispalindrom(str,length)==1)
	{
		printf("String is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
	return 0;
}
