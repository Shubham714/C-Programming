#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int count[26],i;
	printf("Enter the string=");
	scanf("%s",str);
	for(i=0;i<26;i++)
	{
		count[i]=0;
	}
	for(i=0;i<strlen(str);i++)
	{
		count[str[i]-'a']++;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(count[str[i]-'a']>=2)
		{
			printf("string is not unique");
			break;
		}
	}
	if(i==strlen(str))
	{
		printf("string is unique");
	}
}
