#include<stdio.h>
void main()
{
	int arr[]={50,80,70,2,30,10,3,30,28,100};
	int n=sizeof(arr)/sizeof(arr[0]);
	int first,second,diff=0,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(arr[i]-arr[j])>diff)
			{
				first=arr[i];second=arr[j];
				diff=abs(arr[i]-arr[j]);
			}
		}
	}
	printf("The max diff between %d and %d is %d",first,second,diff);
}
