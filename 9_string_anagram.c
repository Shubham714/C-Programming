#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20],sum1=0,sum2=0,i;
	printf("Enter first string=");
	scanf("%s",str1);
	printf("Enter second string=");
	scanf("%s",str2);
	if(strlen(str1)!=strlen(str2))
	{
		printf("strings are not anagram of each other");
	}
	else
	{
		for(i=0;i<strlen(str1);i++)
		{
			sum1+=str1[i];
			sum2+=str2[i];
		}
		if(sum1==sum2)
		{
			printf("Strings are anagram of each other");
		}
		else
		{
			printf("Strings are not anagram of each other");
		}
	}
}
