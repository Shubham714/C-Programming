#include<stdio.h>
void main()
{
	int arr[]={4,2,4,5,2,3,1};
	int n=sizeof(arr)/sizeof(arr[0]),i,count[10];
	for(i=0;i<10;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(count[arr[i]]==1)
		{
			printf("%d\t",arr[i]);
		}
		else
		{
			count[arr[i]]++;
		}
	}
}
