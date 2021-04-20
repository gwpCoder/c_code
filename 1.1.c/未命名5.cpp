#include<stdio.h>
int main(void)
{
	int arr[]={12,13,34,56,13,23,35,56,67,78};
	int sz=sizeof(arr)/sizeof(arr[1]);
	int i=0,j=0;
	for(i=0;i<sz-1;i++)
	for(j=0;j<sz-1-i;j++)
	if(arr[j]<arr[j+1])//从小到大排
	{
		int tep=0;
		tep=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=tep;
	 
	} 
	for(i=0;i<sz-1;i++)
	printf("%4d",arr[i]);
	 
	return 0;
}
