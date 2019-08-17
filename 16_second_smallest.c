#include<stdio.h>
#include<limits.h>
void main()
{
	int arr[10]={50,80,70,3,35,10,2,30,28,2},n;
	n=sizeof(arr)/sizeof(arr[0]);
	int first_min,second_min,i;
	first_min=second_min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<first_min)
		{
			second_min=first_min;
			first_min=arr[i];
		}
		else if(arr[i]<second_min && arr[i]!=first_min)
		{
			second_min=arr[i];
		}
	}
	printf("%d",second_min);
}
