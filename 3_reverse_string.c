#include<stdio.h>
int xstrlen(char str[]);
int main()
{
	char str[20],temp;
	int i,j;
	printf("Enter the string=");
	scanf("%s",str);
	j=xstrlen(str)-1;
	i=0;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;j--;
	}
	printf("%s",str);
}
int xstrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
