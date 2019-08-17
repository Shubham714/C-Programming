#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,n,i,j;
	printf("Enter the size of array=");
	scanf("%d",&n);
	arr=(int *)malloc(n * sizeof(int));
	printf("Enter actual element=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j && arr[i]==arr[j])
			{
				break;
			}
		}
		if(j==n)
		{
			printf("%d",arr[i]);
			break;
		}
	}
}
