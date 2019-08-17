#include<stdio.h>
void main()
{
	int arr[]={50,80,70,2,35,10,3,30,28,100};
	int n=sizeof(arr)/sizeof(arr[0]),i,j,k,sum=0;
	for(i=0;i<n-1;i++)
	{
		if(sum<arr[i]+arr[i+1])
		{
			sum=arr[i]+arr[i+1];
			j=i;k=i+1;
		}
	}
	printf("%d %d %d",arr[j],arr[k],sum);
	
}
