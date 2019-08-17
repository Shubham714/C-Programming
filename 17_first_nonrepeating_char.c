#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="geeksforgeeks";
	int count[26],i;
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
		if(count[str[i]-'a']==1)
		{
			printf("%c",str[i]);
			break;
		}
	}
}
