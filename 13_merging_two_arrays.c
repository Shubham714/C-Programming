#include<stdio.h>
void alternatively_merge(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		arr3[k++]=arr1[i++];
		arr3[k++]=arr2[j++];
	}
	while(i<n1)
	{
		arr3[k++]=arr1[i++];
	}
	while(j<n2)
	{
		arr3[k++]=arr2[j++];
	}
}
void main()
{
	int arr1[]={1,2,3,4},arr2[]={11,22,33,44,55,66,77,88},n1,n2,i;
	n1=sizeof(arr1)/sizeof(arr1[0]);
	n2=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[n1+n2];
	alternatively_merge(arr1,n1,arr2,n2,arr3);
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
